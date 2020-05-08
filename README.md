# calvalue
เนื่องด้วยการตัดสินใจซื้อสินค้านั้นเรามักมีปัญหาอยู่ที่เราจะรู้ได้อย่างไรว่าสินค้าที่เราซื้อนั้นมีความคุ้มค่า หรือไม่เมื่อเทียบกันระหว่างสินค้าชนิดเดียวกันสองชิ้นแต่มีความแตกต่างที่ปริมาณและราคาทําให้ผู้ซื้อสินค้ามี ความลําบากใจในการเลือก, ทําให้คิดหนัก, เสียเวลาในการคํานวณด้วยตนเอง

## Introduction
จากปัญหาเราจึงมีความคิดที่จะสร้างแอปพลิเคชัน “calvalue” ที่สามารถช่วยเหลือผู้ซื้อสินค้าในการคํานวณหาความ แตกต่างได้ซึ่งการทํางานของแอปพลิเคชันคือจะรับค่าเข้ามาผ่านกระบวนการคํานวณแล้วจะแสดงผลถึงความ แตกต่างของราคาของสินค้าให้กับผู้ใช้โดยประโยชน์ที่ได้จากแอปพลิเคชันนี้คือ ผู้ซื้อสินค้าจะได้รับผลการคํานวณ ที่แม่นยําและรวดเร็วซึ่งจะช่วยในการตัดสินใจได้ดีขึ้น

## Program and Code Language
- [Code::Blocks](http://www.codeblocks.org/ "Code::Blocks")
- C Language

## Installation
1. ดาวน์โหลด zip file จาก [Github](https://codeload.github.com/docxed/calvalue/zip/master "Github")
2. ปิดแอนตี้ไวรัส
3. ทำการแตกไฟล์
4. เข้าไปที่ bin > Release > ดับเบิ้ลคลิกที่ calvalue.exe เพื่อเปิดแอปพลิเคชัน

> รูปแบบ GUI ของแอปพลิเคชันเป็นรูปแบบ console application

![](https://github.com/docxed/calvalue/blob/master/img/open.PNG?raw=true)

## Features and Functions
ในส่วนของการใช้งานนั้นได้แบ่งออกเป็น 3 ส่วน ได้แก่

#### 1. การเปรียบเทียบสินค้าชนิดเดียวกันแต่ต่างกันที่ขนาดและราคา
![](https://raw.githubusercontent.com/docxed/calvalue/master/img/func1.PNG)

ฟังก์ชันการใช้งาน
1. ระบุจำนวนสินค้าที่เอามาเปรียบเทียบ
2. ระบุขนาดและราคาสินค้าแต่ละชนิด

เมื่อผู้ใช้งานใส่ข้อมูลเสร็จสิ้นจะทำการคำนวณหาสินค้าที่คุ้มค่าที่สุดให้กับผู้ใช้พร้อมระบุข้อมูล ราคาต่อหน่วยและความแตกต่าง เมื่อเปรียบเทียบกับสินค้าชนิดอื่นว่าคุ้มค่ากว่ากี่เปอร์เซ็นต์

#### 2. การเปรียบเทียบหาโปรโมชั่นที่ดีที่สุดจากหลาย ๆ โปรโมชั่น
![](https://github.com/docxed/calvalue/blob/master/img/func2.PNG?raw=true)

ฟังก์ชันการใช้งาน
1. ระบุจำนวนโปรโมชั่นที่ต้องการนำมาเปรียบเทียบ
2. ระบุข้อมูลแต่ละโปรโมชั่นว่าซื้อจำนวนเท่าไรและแถมจำนวนเท่าไร พร้อมระบุราคาของสินค้าในแต่ละโปรโมชั่น
3. ระบุจำนวนสินค้าที่ผู้ใช้งานต้องการซื้อ

เมื่อผู้ใช้งานใส่ข้อมูลเสร็จสิ้นระบบจะทำการคำนวณหาโปรโมชั่นที่คุ้มค่าที่สุดให้กับผู้ใช้งานพร้อมระบุจำนวนเงินที่ผู้ใช้ต้องจ่าย

#### 3. การเปรียบเทียบหาส่วนลดที่คุ้มค่าที่สุดระหว่างส่วนลดเปอร์เซ็นต์และการลดราคาสินค้าโดยตรง
![](https://github.com/docxed/calvalue/blob/master/img/func3.PNG?raw=true)

ฟังก์ชันการใช้งาน
1. ระบุจำนวนเปอร์เซ็นต์ที่ลดราคา
2. ระบุเงื่อนไขการใช้ส่วนลดแบบเปอร์เซ็นต์ว่าต้องซื้อสินค้าให้ถึงราคาเท่าไรถึงใช้ได้
3. ระบุจำนวนส่วนลดที่นำมาลดราคาโดยตรง
4. ระบุราคาสินค้าโดยรวมทั้งหมด

เมื่อผู้ใช้งานใส่ข้อมูลเสร็จสิ้นระบบจะทำการคำนวณหาส่วนลดที่คุ้มค่าที่สุดระหว่างการลดราคาด้วยเปอร์เซ็นต์และลดราคาโดยตรง

> [คลิปสาธิตการใช้งาน](https://youtu.be/ncyGyC94NNU "คลิปสาธิตการใช้งาน")

## Algorithm and Method

1. ฟังก์ชันเปรียบเทียบสินค้าชนิดเดียวกันแต่ต่างกันที่ขนาดและราคา
	เปรียบเทียบสินค้าหลาย ๆ ชิ้นว่าชิ้นไหนมีความคุ้มค่าด้านขนาดมากกว่ากัน
	นำ **ขนาด/ราคา** จะได้ **ขนาด:ราคา** นำมาเทียบกัน ขนาด:ราคายิ่งมากยิ่งแสดงถึงความคุ้มค่า
	
2. ฟังก์ชันเปรียบเทียบหาโปรโมชั่นที่ดีที่สุดจากหลาย ๆ โปรโมชั่น
	เปรียบเทียบโปรโมชั่นซื้อ x แถม y ว่าโปรโมชั่นใดได้สินค้าคุ้มค่าและเพียงพอกับความต้องการที่สุดเปรียบเทียบโปรโมชั่นซื้อ x แถม y ว่าโปรโมชั่นใดได้สินค้าคุ้มค่าและเพียงพอกับความต้องการที่สุดหาจำนวนครั้งที่ใช้โปรโมชั่นเพื่อคำนวณราคาที่ต้องจ่ายโดยใช้สมการ **จำนวนที่ต้องการ / (x + y)** ภาษา C การหาร int จะไม่มีทศนิยม หากมีเศษจะไม่สามารถรู้ได้จึงต้องหาเศษโดยใช้สมการ **จำนวนที่ต้องการ - (จำนวนครั้งที่ใช้โปรโมชั่น \* (x +  y))** แล้วจะได้เศษเหลือจากการใช้โปรโมชั่น ที่จำเป็นต้องซื้อโดยไม่ใช้โปรโมชั่น จากนั้นหาราคาที่ต้องจ่ายโดยเอา **(จำนวนครั้งที่ใช้ \* x \* ราคา) + (เศษ \* ราคา)** และหาราคาที่จ่าย:ความต้องการ ยิ่งราคา:ความต้องการน้อยยิ่งคุ้มค่ามาก
	ในกรณีที่ **ราคา:ความต้องการ** เท่ากันในบางเคส จำเป็นต้องหาว่าแต่ละกรณีจะได้สินค้ากี่ชิ้น ในกรณีที่เศษที่เหลือมีเท่ากับค่า x จะทำให้ได้สินค้าที่ได้รับเพิ่มขึ้น และเมื่อได้สินค้ามากกว่าก็แสดงว่าคุ้มค่ามากกว่า

3. ฟังก์ชันเปรียบเทียบหาส่วนลดที่คุ้มค่าที่สุดระหว่างส่วนลดเปอร์เซ็นต์และการลดราคาสินค้าโดยตรง
	เปรียบเทียบการลดราคาระหว่างลดเป็นเปอร์เซ็นต์กับลดเป็นบาท ว่าลดแบบใดจะทำให้ราคาน้อยกว่ากัน
	นำ **ราคา/100\*เปอร์เซ็นต์** เพื่อจะหาว่าลดราคาเท่าใด หากราคาที่ลดมากกว่าค่าสูงสุดของการลด ให้นำค่าสูงสุดมาใช้หากราคาที่ลดน้อยกว่าให้นำค่านั้นมาใช้ เทียบกับการลดเป็นบาท

## Our Team
| <img src="https://raw.githubusercontent.com/docxed/calvalue/master/img/215.jpg" width="100" height="100"> | <img src="https://raw.githubusercontent.com/docxed/calvalue/master/img/204.jpg" width="100" height="100">  | <img src="https://raw.githubusercontent.com/docxed/calvalue/master/img/168.jpg" width="100" height="100"> |
| :------------: | :------------: | :------------: |
| [@docxed](https://github.com/docxed "@docxed") | [@notepad11196](https://github.com/notepad11196 "@notepad11196") | [@Vichayuth](https://github.com/Vichayuth "@Vichayuth") |
| Akira Seesanyong | Soodket Sancharoen | Vichayuth Tavichaiyuth |
| 62070215 | 62070204 | 62070168 |

## Instructor
| <img src="https://raw.githubusercontent.com/docxed/calvalue/master/img/ksc.jpg" width="100" height="100"> | <img src="https://raw.githubusercontent.com/docxed/calvalue/master/img/pw.jpg" width="100" height="100"> |
| :------------: | :------------: |
| Assist.Prof. Dr. Kitsuchart Pasupa	 | Assist.Prof. Dr. Panwit Tuwanut |







------------


รายงานนี้เป็นส่วนหนึ่งของวิชา Computer Programming (รหัส 06016315)

คณะเทคโนโลยีสารสนเทศ สถาบันเทคโนโลยีพระจอมเกล้าเจ้าคุณทหารลาดกระบัง

Faculty of Information Technology

King Mongkut's Institute of Technology Ladkrabang



