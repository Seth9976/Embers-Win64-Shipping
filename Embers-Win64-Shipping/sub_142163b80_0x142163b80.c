// 函数: sub_142163b80
// 地址: 0x142163b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140cde0b0()
sub_140d19010(rax, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_8 = 0
void* result = sub_140d2dfc0(sub_1424929c0(), rax, 0, 0, 0, 0, 0, 0, 0)
*(result + 0x58) = arg1
int64_t var_78
sub_14215dc20(result + 0xa8, sub_1423fd810(&var_78, nullptr))
int64_t var_20

if (var_20 != 0)
    sub_140a74f90(var_20)

int32_t i_2
int32_t i_1 = i_2
int64_t* var_30
int64_t* rbx_1 = var_30

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_5 = *rbx_1
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = var_30

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int64_t var_40

if (var_40 != 0)
    sub_140a74f90(var_40)

int64_t var_50

if (var_50 != 0)
    sub_140a74f90(var_50)

int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

int64_t rcx_10 = var_78

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

*(result + 0x134) = *(arg2 + 0x134)
sub_140597df0(result + 0xb8, arg2 + 0xb8)
*(result + 0x1a30) = arg2
*(result + 0x68) = *(arg2 + 0x68)
*(result + 0x38) = *(arg2 + 0x38)
int64_t rdi_1 = sx.q(*(arg2 + 0x50))
int32_t rax_6 = (rdi_1 + 1).d
*(arg2 + 0x50) = rax_6

if (rax_6 s> *(arg2 + 0x54))
    sub_1405a4d70(arg2 + 0x48)

*(*(arg2 + 0x48) + (rdi_1 << 3)) = result
return result
