// 函数: sub_142c41650
// 地址: 0x142c41650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *arg1
uint32_t r8 = zx.d(sub_142c47040(rbx))
int32_t i = 0
int32_t r9_1 = r8 & 0x7f
uint32_t r8_1 = r8 u>> 8
int32_t rax_10

if (rbx - 0x953 u<= 1)
    r9_1 = 8
    rax_10 = 1 << r9_1.b
else if (rbx - 0xa72 u<= 1 || rbx - 0x1cf5 u<= 1)
    r9_1 = 1
    rax_10 = 1 << r9_1.b
else if (rbx - 0x1ce2 u<= 6)
    r9_1 = 0xa
    rax_10 = 1 << r9_1.b
else if (rbx == 0x1ced)
    r9_1 = 0xa
    rax_10 = 1 << r9_1.b
else if (rbx - 0xa8f2 u<= 5 || rbx - 0x1ce9 u<= 3 || rbx - 0x1cee u<= 3)
    r9_1 = 0x12
    rax_10 = 1 << r9_1.b
else if (rbx == 0xa51)
    r9_1 = 7
    r8_1 = 8
    rax_10 = 1 << r9_1.b
else if (((rbx - 0x11301) & 0xfffffffd) == 0)
    r9_1 = 8
    rax_10 = 1 << r9_1.b
else if (rbx == 0x1133c)
    r9_1 = 3
    rax_10 = 1 << r9_1.b
else if (rbx == 0xafb)
    r9_1 = 3
    rax_10 = 1 << r9_1.b
else if (rbx == 0x980)
    r9_1 = 0xb
    rax_10 = 1 << r9_1.b
else if (rbx == 0x9fc)
    r9_1 = 0xb
    rax_10 = 1 << r9_1.b
else if (rbx == 0xc80)
    r9_1 = 0xb
    rax_10 = 1 << r9_1.b
else if (rbx - 0x2010 u<= 1)
    r9_1 = 0xb
    rax_10 = 1 << r9_1.b
else if (rbx == 0x25cc)
    r9_1 = 0xc
    rax_10 = 1 << r9_1.b
else if (r9_1 u< 0x20)
    rax_10 = 1 << r9_1.b
else
    rax_10 = 0

uint64_t result

if ((rax_10 & 0xb1806) != 0)
    r8_1 = 4
    result = &data_1436a4da8
    
    do
        if (rbx == *result)
            r9_1 = 0x10
            break
        
        i += 1
        result += 4
    while (i u< 0xc)
else if (r9_1 != 7)
    int32_t r10_1
    
    if (r9_1 u>= 0x20)
        r10_1 = 0
    else
        r10_1 = 1 << r9_1.b
    
    result = 0xe
    
    if ((r10_1 & 0x40500) != 0)
        r8_1 = 0xe
else
    result = sub_142c41490(rbx, r8_1)
    r8_1 = result.d

*(arg1 + 0x12) = r9_1.b

if (rbx == 0xb01)
    r8_1 = 7

*(arg1 + 0x13) = r8_1.b
return result
