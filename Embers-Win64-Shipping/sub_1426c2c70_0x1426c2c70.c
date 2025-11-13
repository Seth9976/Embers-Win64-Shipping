// 函数: sub_1426c2c70
// 地址: 0x1426c2c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x30)
int32_t rbx = 0
char rcx

if (rax == arg1)
    *(arg1 + 0x30) = 0
    rcx = 0
else if (rax == 0)
    rcx = 0
else
    rcx = *(rax + 0x4c) + (*(rax + 0x40)).b

*(arg1 + 0x4c) = rcx
void* rax_1 = sub_1426a5fd0(arg1, &data_143f72000)

if (rax_1 != 0)
    *(rax_1 + 0x30) = sub_142452380()

int64_t r14
r14.b = 0
int32_t rdx = data_143b57ff0
int32_t rcx_3 = data_143b57ffc + 1
data_143b57ffc = rcx_3
uint64_t result = zx.q(rdx - 1)
int64_t rdi_1 = sx.q(result.d)

if (result.d s>= 0)
    int64_t rsi_2 = rdi_1 << 4
    int64_t temp0_1
    
    do
        result = data_143b57fe8
        
        if (*(rsi_2 + result + 8) == 0)
            r14.b = 1
        else
            int64_t* rcx_4 = *(rsi_2 + result)
            
            if (rcx_4 == 0)
                r14.b = 1
            else
                result = (*(*rcx_4 + 0x50))(rcx_4, arg1)
                
                if (result.b == 0)
                    r14.b = 1
        
        rsi_2 -= 0x10
        temp0_1 = rdi_1
        rdi_1 -= 1
    while (temp0_1 - 1 s>= 0)
    rcx_3 = data_143b57ffc
    rdx = data_143b57ff0

data_143b57ffc = rcx_3 - 1

if (r14.b != 0 && rcx_3 - 1 s<= 0)
    int32_t rsi_3 = rdx
    
    if (rdx s> 0)
        int64_t* rdi_2 = nullptr
        
        do
            int64_t rax_4 = data_143b57fe8
            
            if (*(rdi_2 + rax_4 + 8) == 0)
                sub_1405a4880(&data_143b57fe8, rbx, 1, 1)
            else
                int64_t* rcx_6 = *(rdi_2 + rax_4)
                
                if (rcx_6 == 0)
                    sub_1405a4880(&data_143b57fe8, rbx, 1, 1)
                else if ((*(*rcx_6 + 0x20))(rcx_6) != 0)
                    sub_1405a4880(&data_143b57fe8, rbx, 1, 1)
                else
                    rbx += 1
                    rdi_2 = &rdi_2[2]
            
            rdx = data_143b57ff0
        while (rbx s< rdx)
    
    result = zx.q(rdx * 2)
    
    if (result.d s<= 2)
        result = 2
    
    data_143b57ff8 = result.d
    
    if (rsi_3 s> result.d && data_143b57ff4 != rdx)
        return sub_1405a5410(&data_143b57fe8, rdx)

return result
