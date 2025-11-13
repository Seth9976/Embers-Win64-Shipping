// 函数: sub_1409fff20
// 地址: 0x1409fff20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
*(arg1 + 0x54) = arg2[5].d
char rax_2 = -0x80
*(arg1 + 0xc) = *(arg2 + 0x2c)
*(arg1 + 0x14) = *(arg2 + 0x34)
*(arg1 + 0x1c) = *(arg2 + 0x3c)
*(arg1 + 0x24) = *(arg2 + 0x44)
char rcx = 0x7f
int64_t zmm1
zmm1.d = arg2[3].d.d f* 127f
zmm1.d = zmm1.d f+ zmm1.d
zmm1.d = zmm1.d f+ 0.5f
int32_t r10_1 = int.d(zmm1.d) s>> 1
char r9

if (r10_1 s>= 0xffffff80)
    r9 = 0x7f
    
    if (r10_1 s< 0x7f)
        r9 = r10_1.b
else
    r9 = -0x80

*(arg1 + 0x4c) = r9
zmm1.d = (*(arg2 + 0x1c)).d f* 127f
zmm1.d = zmm1.d f+ zmm1.d
zmm1.d = zmm1.d f+ 0.5f
int32_t r9_2 = int.d(zmm1.d) s>> 1
char r10_2

if (r9_2 s>= 0xffffff80)
    r10_2 = 0x7f
    
    if (r9_2 s< 0x7f)
        r10_2 = r9_2.b
else
    r10_2 = -0x80

*(arg1 + 0x4d) = r10_2
zmm1.d = arg2[4].d.d f* 127f
zmm1.d = zmm1.d f+ zmm1.d
zmm1.d = zmm1.d f+ 0.5f
int32_t r9_4 = int.d(zmm1.d) s>> 1
char r10_3

if (r9_4 s>= 0xffffff80)
    r10_3 = 0x7f
    
    if (r9_4 s< 0x7f)
        r10_3 = r9_4.b
else
    r10_3 = -0x80

*(arg1 + 0x4e) = r10_3
*(arg1 + 0x4f) = 0x7f
zmm1.d = (*(arg2 + 0xc)).d f* 127f
zmm1.d = zmm1.d f+ zmm1.d
zmm1.d = zmm1.d f+ 0.5f
int32_t r10_5 = int.d(zmm1.d) s>> 1
char r9_5

if (r10_5 s>= 0xffffff80)
    r9_5 = 0x7f
    
    if (r10_5 s< 0x7f)
        r9_5 = r10_5.b
else
    r9_5 = -0x80

arg1[0xa].b = r9_5
zmm1.d = arg2[2].d.d f* 127f
zmm1.d = zmm1.d f+ zmm1.d
zmm1.d = zmm1.d f+ 0.5f
int32_t r9_7 = int.d(zmm1.d) s>> 1
char r10_6

if (r9_7 s>= 0xffffff80)
    r10_6 = 0x7f
    
    if (r9_7 s< 0x7f)
        r10_6 = r9_7.b
else
    r10_6 = -0x80

*(arg1 + 0x51) = r10_6
zmm1.d = (*(arg2 + 0x14)).d f* 127f
zmm1.d = zmm1.d f+ zmm1.d
zmm1.d = zmm1.d f+ 0.5f
int32_t r9_9 = int.d(zmm1.d) s>> 1

if (r9_9 s>= 0xffffff80)
    rax_2 = 0x7f
    
    if (r9_9 s< 0x7f)
        rax_2 = r9_9.b

*(arg1 + 0x52) = rax_2
*(arg1 + 0x53) = 0x7f

if (*(arg2 + 0x24) != 0)
    rcx = -0x7f

*(arg1 + 0x53) = rcx
return 0xffffff81
