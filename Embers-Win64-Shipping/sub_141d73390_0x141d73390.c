// 函数: sub_141d73390
// 地址: 0x141d73390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140cde0b0()
sub_140d19010(rax, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_10 = 0
void* rax_2
uint64_t zmm1
rax_2, zmm1 = sub_140d2dfc0(sub_141d81de0(), rax, 0, 0, 0, 0, 0, 0, 0)
int64_t var_18 = *arg2
void* rcx_3 = arg2[1]
void* var_10 = rcx_3

if (rcx_3 != 0)
    *(rcx_3 + 8) += 1

(*(*(rax_2 + 0x28) + 0x10))(rax_2 + 0x28, &var_18, 0xffffffff)
sub_141d7fa80(rax_2, zmm1)
int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        int64_t rdx_2 = *rbx_2
        (*rdx_2)(rbx_2, rdx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_1 = *rbx_2
            (*(r8_1 + 8))(rbx_2, 1, r8_1)

return rax_2 + 0x28
