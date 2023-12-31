
USE Projet;
-- Affichage GridView
SELECT * FROM Product;
SELECT * FROM Client;
SELECT * FROM Orders;
SELECT * FROM Personnel;

-- Fonction Afficher : 
SELECT * FROM Personnel WHERE lastname_p='' AND firstname_p='' AND hiring_p=DATE; --Personnel
SELECT * FROM Client WHERE lastname_c='' AND firstname_c='' AND birth_c=DATE; --Client
SELECT * FROM Orders WHERE ref_o=NULL AND id_c=NULL; --Commandes
SELECT * FROM Product WHERE ref_pr=NULL AND name_pr='' AND nature_pr=''; --Product

-- Fonction Inserer :
INSERT INTO Address(zipcode_a,address_a,city_a,land_a) VALUES (67000,'','',''); --Personnel
INSERT INTO Personnel(sup_p,hiring_p,lastname_p,firstname_p,id_a) VALUES (1,DATE,'','',1); --Personnel

INSERT INTO Payement(priceHT_pa,priceTVA_pa,priceTTC_pa) VALUES (1,1,1); --Product
INSERT INTO Product(ref_pr,name_pr,quantity_pr,reorder_pr,nature_pr,color_pr,id_pa) VALUES (1,'',100,10,'','',1); --Product

INSERT INTO Client(lastname_c,firstname_c,birth_c) VALUES ('','',DATE); --Client

INSERT INTO Bill(nameSociety_b,clientNum_b,id_c) VALUES ('',0606060606,1); --Orders
INSERT INTO Orders(ref_o,deliveryDate_o,issue_o,paymentDate_o,settlementDate_o,totalItems_o,id_c,id_b) --Orders
VALUES (1,DATE,DATE,DATE,DATE,1,1,1); --Orders

-- Fonction Modifier:
UPDATE Address --Personnel
SET zipcode_a=1, address_a='', city_a='', land_a='' 
WHERE id_a=1;
UPDATE Personnel
SET sup_p = 1, hiring_p=DATE, lastname_p='', firstname_p=''
WHERE id_p = 1;--Personnel

UPDATE Client --Client
SET lastname_c='', firstname_c='', birth_c=DATE 
WHERE id_c = 1; --Client

UPDATE Payment--Product price
SET Payment.priceTTC_pa=1, Payment.priceHT_pa=1,Payment.priceTVA_pa=1
FROM Payment INNER JOIN Product ON Product.id_pr=Payment.id_pa 
WHERE Payment.id=Product.id --Product price

UPDATE Product--Product
SET ref_pr=1,name_pr='',quantity_pr=1,reorder_pr=1,nature_pr='',color_pr='',id_pa=1
WHERE id_pr = 1;--Product

UPDATE Orders --Orders
SET ref_o=1,deliveryDate_o=DATE,issue_o=DATE,paymentDate_o=DATE,settlementDate_o=DATE,totalItems_o=1,id_c=1,id_b=1
WHERE id_o = 1; --Orders

UPDATE Bill --Orders Bill
SET nameSociety_b='',clientNum_b=010101010,id_c=1
FROM Bill INNER JOIN Orders ON Bill.id_b= Orders.id_b
WHERE Bill.id_b= Orders.id_b;--Orders Bill

--Fonction Supprimer:
DELETE FROM Personnel WHERE id_p = 1;
DELETE FROM Client WHERE id_c=1;
DELETE FROM Orders WHERE id_o=1;
DELETE FROM Product WHERE id_pr=1;


