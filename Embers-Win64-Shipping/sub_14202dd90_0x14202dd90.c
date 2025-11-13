// 函数: sub_14202dd90
// 地址: 0x14202dd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x1e].b != 3)
    int64_t* rax_1 = sub_141dcc7c0(arg1)
    int64_t rdx_1 = *rax_1
    (*(rdx_1 + 0x650))(rax_1, rdx_1)

int64_t arg_8 = *(arg1[2] + 0x18)
int64_t var_18
sub_140b63b70(&arg_8, &var_18)
int64_t rsi
rsi.b = 0
int32_t rdx_3 = data_1439a02a8
int32_t rcx_4 = data_1439a02b4 + 1
data_1439a02b4 = rcx_4
uint64_t result = zx.q(rdx_3 - 1)
int64_t rdi = sx.q(result.d)

if (result.d s>= 0)
    int64_t rbx_2 = rdi << 4
    int64_t temp0_1
    
    do
        result = data_1439a02a0
        
        if (*(rbx_2 + result + 8) == 0)
            rsi.b = 1
        else
            int64_t* rcx_5 = *(rbx_2 + result)
            
            if (rcx_5 == 0)
                rsi.b = 1
            else
                result = (*(*rcx_5 + 0x50))(rcx_5, &var_18)
                
                if (result.b == 0)
                    rsi.b = 1
        
        rbx_2 -= 0x10
        temp0_1 = rdi
        rdi -= 1
    while (temp0_1 - 1 s>= 0)
    rcx_4 = data_1439a02b4
    rdx_3 = data_1439a02a8

data_1439a02b4 = rcx_4 - 1

if (rsi.b != 0 && rcx_4 - 1 s<= 0)
    int32_t rbx_3 = 0
    int32_t rsi_1 = rdx_3
    
    if (rdx_3 s> 0)
        int64_t* rdi_1 = nullptr
        
        do
            int64_t rax_4 = data_1439a02a0
            
            if (*(rdi_1 + rax_4 + 8) == 0)
                sub_1405a4880(&data_1439a02a0, rbx_3, 1, 1)
            else
                int64_t* rcx_7 = *(rdi_1 + rax_4)
                
                if (rcx_7 == 0)
                    sub_1405a4880(&data_1439a02a0, rbx_3, 1, 1)
                else if ((*(*rcx_7 + 0x20))(rcx_7) != 0)
                    sub_1405a4880(&data_1439a02a0, rbx_3, 1, 1)
                else
                    rbx_3 += 1
                    rdi_1 = &rdi_1[2]
            
            rdx_3 = data_1439a02a8
        while (rbx_3 s< rdx_3)
    
    result = zx.q(rdx_3 * 2)
    
    if (result.d s<= 2)
        result = 2
    
    data_1439a02b0 = result.d
    
    if (rsi_1 s> result.d && data_1439a02ac != rdx_3)
        result = sub_1405a5410(&data_1439a02a0, rdx_3)

int64_t rcx_8 = var_18

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
