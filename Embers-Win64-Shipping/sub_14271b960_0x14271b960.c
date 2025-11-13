// 函数: sub_14271b960
// 地址: 0x14271b960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x68) != 0)
    return 

int64_t rax = sub_14263a940(arg1)
int64_t rdi_1 = rax

if (rax == 0)
    return 

void* rax_1 = sub_1427249f0()
void* rdx_1 = *(rdi_1 + 0x10)
int64_t rax_2 = sx.q(*(rax_1 + 0x38))
int64_t rbx_1

if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rbx_1 = nullptr
    void* rax_3 = sub_14255d000()
    void* rdx_2 = *(rdi_1 + 0x10)
    rax = sx.q(*(rax_3 + 0x38))
    
    if (rax.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax << 3)) == rax_3 + 0x30)
        rdi_1 = *(rdi_1 + 0x258)
        
        if (rdi_1 != 0)
            void* rax_4 = sub_1427249f0()
            void* rdx_3 = *(rdi_1 + 0x10)
            rax = sx.q(*(rax_4 + 0x38))
            
            if (rax.d s<= *(rdx_3 + 0x38) && *(*(rdx_3 + 0x30) + (rax << 3)) == rax_4 + 0x30)
                rbx_1 = rdi_1
else
    rbx_1 = rdi_1

*(arg1 + 0x68) = rbx_1
