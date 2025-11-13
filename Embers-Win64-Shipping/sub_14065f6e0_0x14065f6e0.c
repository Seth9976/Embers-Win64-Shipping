// 函数: sub_14065f6e0
// 地址: 0x14065f6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18 = nullptr
int32_t i_2 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rsi = &var_18
int32_t arg_10 = (zx.o(0)).d

if (rax_2 != 0)
    rsi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
int128_t zmm2 = arg_10
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
int32_t result = sub_14063bf50(arg1, rsi, zmm2)
int32_t i_1 = i_2

if (i_1 != 0)
    int64_t* rdi_3 = var_18 + 8
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi_3
        
        if (rbx_1 != 0)
            result = rbx_1[1].d
            rbx_1[1].d -= 1
            
            if (result == 1)
                (**rbx_1)(rbx_1)
                result = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_3 = &rdi_3[4]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* rcx_5 = var_18

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
