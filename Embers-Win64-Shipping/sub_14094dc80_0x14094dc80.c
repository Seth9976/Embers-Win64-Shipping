// 函数: sub_14094dc80
// 地址: 0x14094dc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg2 + 0x10)
int64_t var_18 = *(arg2 + 8)

if (rbx != 0)
    rbx[1].d += 1

if (&var_18 != arg1 + 8)
    var_18.o = *(arg1 + 8)
    *(arg1 + 8) = var_18.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140597df0(arg1 + 0x18, arg2 + 0x18)
*(arg1 + 0x30) = *(arg2 + 0x30)
*(arg1 + 0x34) = *(arg2 + 0x34)
*(arg1 + 0x38) = *(arg2 + 0x38)
*(arg1 + 0x39) = *(arg2 + 0x39)
*(arg1 + 0x3a) = *(arg2 + 0x3a)
*(arg1 + 0x3b) = *(arg2 + 0x3b)
*(arg1 + 0x3c) = *(arg2 + 0x3c)
*(arg1 + 0x3d) = *(arg2 + 0x3d)
*(arg1 + 0x3e) = *(arg2 + 0x3e)
*(arg1 + 0x3f) = *(arg2 + 0x3f)
*(arg1 + 0x40) = *(arg2 + 0x40)
*(arg1 + 0x41) = *(arg2 + 0x41)
*(arg1 + 0x44) = *(arg2 + 0x44)
sub_14091bc80(arg1 + 0x48, arg2 + 0x48)
int64_t* rbx_1 = *(arg2 + 0xa0)
var_18 = *(arg2 + 0x98)

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (&var_18 != arg1 + 0x98)
    var_18.o = *(arg1 + 0x98)
    *(arg1 + 0x98) = var_18.o

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_1 = *rbx_1
            (*(r8_1 + 8))(rbx_1, 1, r8_1)

*(arg1 + 0xa8) = *(arg2 + 0xa8)
*(arg1 + 0xac) = *(arg2 + 0xac)
return arg1
