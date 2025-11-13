// 函数: sub_141fbe070
// 地址: 0x141fbe070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1

if (*(arg1 + 0xb0c) == 0)
    rax_1 = *(arg1 + 0x88)

int64_t r12

if (*(arg1 + 0xb0c) == 0 && (rax_1 == 0 || *(rax_1 + 0x134) == 1))
    r12.b = 0
else
    r12.b = 1

int64_t rsi
rsi.b = 0
int32_t rdx = data_143a2dc58
int32_t rcx_1 = data_143a2dc64 + 1
data_143a2dc64 = rcx_1
int64_t rbx = sx.q(rdx - 1)

if (rdx - 1 s>= 0)
    int64_t rdi_2 = rbx << 4
    int64_t temp0_1
    
    do
        int64_t rax_3 = data_143a2dc50
        
        if (*(rdi_2 + rax_3 + 8) == 0)
            rsi.b = 1
        else
            int64_t* rcx_2 = *(rdi_2 + rax_3)
            
            if (rcx_2 == 0)
                rsi.b = 1
            else if ((*(*rcx_2 + 0x50))(rcx_2, arg1, zx.q(arg2)) == 0)
                rsi.b = 1
        
        rdi_2 -= 0x10
        temp0_1 = rbx
        rbx -= 1
    while (temp0_1 - 1 s>= 0)
    rcx_1 = data_143a2dc64
    rdx = data_143a2dc58

int32_t rbp = 0
data_143a2dc64 = rcx_1 - 1

if (rsi.b != 0 && rcx_1 - 1 s<= 0)
    int32_t rsi_1 = rdx
    int32_t rbx_1 = 0
    
    if (rdx s> 0)
        int64_t* rdi_3 = nullptr
        
        do
            int64_t rax_6 = data_143a2dc50
            
            if (*(rdi_3 + rax_6 + 8) == 0)
                sub_1405a4880(&data_143a2dc50, rbx_1, 1, 1)
            else
                int64_t* rcx_4 = *(rdi_3 + rax_6)
                
                if (rcx_4 == 0)
                    sub_1405a4880(&data_143a2dc50, rbx_1, 1, 1)
                else if ((*(*rcx_4 + 0x20))(rcx_4) != 0)
                    sub_1405a4880(&data_143a2dc50, rbx_1, 1, 1)
                else
                    rbx_1 += 1
                    rdi_3 = &rdi_3[2]
            
            rdx = data_143a2dc58
        while (rbx_1 s< rdx)
    
    int32_t rax_9 = rdx * 2
    
    if (rax_9 s<= 2)
        rax_9 = 2
    
    data_143a2dc60 = rax_9
    
    if (rsi_1 s> rax_9 && data_143a2dc5c != rdx)
        sub_1405a5410(&data_143a2dc50, rdx)

void* result = sub_141fca380(arg1)

if (r12.b != 0)
    result = *(arg1 + 0x140)
    
    if (result != 0)
        int64_t* rsi_2 = *(result + 0x188)
        
        if (rsi_2 != 0)
            int16_t* rax_10 = sub_141fcdc30(arg2)
            int64_t var_28 = 0
            int32_t rcx_7 = 0
            int32_t var_1c_1 = 0
            int32_t var_20_1 = 0
            
            if (rax_10 != 0 && *rax_10 != 0)
                int64_t rbx_2 = -1
                
                do
                    rbx_2 += 1
                while (rax_10[rbx_2] != 0)
                
                if (rbx_2.d + 1 s> 0)
                    sub_1405947f0(&var_28, rbx_2.d + 1)
                    rcx_7 = var_1c_1
                    rbp = var_20_1
                
                int32_t rax_11 = rbx_2.d + 1 + rbp
                int32_t var_20_2 = rax_11
                
                if (rax_11 s> rcx_7)
                    sub_140594770(&var_28)
                
                UnDecorator::getReferenceType(var_28, rax_10, (rbx_2.d + 1) * 2)
            
            result = (*(*rsi_2 + 0x2e0))(rsi_2, zx.q(arg2), &var_28)
            int64_t rcx_12 = var_28
            
            if (rcx_12 != 0)
                return sub_140a74f90(rcx_12)

return result
