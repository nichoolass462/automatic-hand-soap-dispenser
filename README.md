# System Overview 
- The Arduino Uno is powered via the USB-B bus
- The R280 Diaphragm Pump is powered with the 3.7V Lithim-Ion Battery
- When the sensor detects user's hand, the MOSFET is turned on to let the battery flow to the pump

## Components

| Qty | Component | Datasheet / Product Page |
|---|---|---|
| 1 | Arduino Uno R3 | [Link](https://docs.arduino.cc/resources/datasheets/A000066-datasheet.pdf?_gl=1*tkex9c*_up*MQ..*_ga*MTQwNTQ5MTYxOS4xNzkxNjMyNzgw*_ga_NEXN8H46L5*czE3OTE2MzI3NzckbzEkZzAkdDE3OTE2MzI3NzckajYwJGwwJGgzMTQxNzcwMjE.) |
| 1 | Infrared Obstacle Detection Sensor | [Link](https://mm.digikey.com/Volume0/opasdata/d220001/medias/docus/8924/ST0050%20%20%20%20IR%20Obstacle%20Avoidance%20Sensor%20Module.pdf#page=3.00) |
| 1 | R280 Diaphragm Pump | [Link](https://id.aliexpress.com/item/1005008390185039.html?gatewayAdapt=glo2idn) |
| 1 | 3.7V Lithium-Ion Battery | [Link](https://www.aliexpress.com/item/1005009795367952.html?spm=a2g0o.productlist.main.9.1dc114c5kI21Eh&algo_pvid=f43ce873-cc31-4baf-8625-f48f787f0863&algo_exp_id=f43ce873-cc31-4baf-8625-f48f787f0863-8&pdp_ext_f=%7B%22order%22%3A%2256%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21IDR%21121304.00%2119899.00%21%21%2144.51%217.30%21%400bafc98f17916333697365978e0e64%2112000050188574230%21sea%21MY%210%21ABX%211%210%21n_tag%3A-29910%3Bd%3A50b5042e%3Bm03_new_user%3A-29895%3BpisId%3A5000000216900887&curPageLogUid=CZtf0TzEcFdV&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005009795367952%7C_p_origin_prod%3A) |
| 1 | IRLZ44N MOSFET | [Link](https://www.ti.com/product/CSD18537NKCS?utm_source=google&utm_medium=cpc&utm_campaign=ti-null-null-xref-cpc-pf-google-roa_en_cons&utm_content=xref&ds_k=IRLZ44N&dcm=yes&gclsrc=aw.ds&gad_source=1&gad_campaignid=20551704468&gbraid=0AAAAAC068F2b3A2SV5gNBfmXFM8Ka-a5q&gclid=Cj0KCQjwxKfWBhDkARIsAMKwkNYLHVmMq8HziihdtHJnJM_UmwcqsB_4ivVsE-sUT_z1Q9YgsKlYSsIaArOoEALw_wcB) |
| 1 | 1N4007 Diode | [Link](https://www.vishay.com/docs/88503/1n4001.pdf) |
