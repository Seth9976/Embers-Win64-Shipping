// 函数: sub_142743960
// 地址: 0x142743960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = *(*arg1 + 0x430)
int64_t rax_2

if (rbx != 0)
    void* rax_1 = sub_142749290()
    arg2 = *(rbx + 0x10)
    arg3 = rax_1 + 0x30
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rbx == 0 || rax_2.d s> *(arg2 + 0x38) || *(*(arg2 + 0x30) + (rax_2 << 3)) != arg3)
    rbx = nullptr

int64_t* rcx_1 = *(rbx + 0x418)
int32_t result = (*(*rcx_1 + 0xc0))(rcx_1, arg2, arg3)
int32_t result_1 = result
int32_t rdx = *arg1[1]
int64_t r14
r14.b = ((rdx - 1) & 0xfffffffd) == 0
int64_t r15
r15.b = rdx - 2 u<= 1
int32_t rbp = 0

if (result != 0)
    do
        int64_t* rcx_5 = *(*arg1 + 0x680)
        int64_t arg_8
        result = (*(*rcx_5 + 0xd8))(rcx_5, &arg_8, zx.q(rbp))
        
        if (result != 0)
            int64_t* rdi_1 = nullptr
            uint64_t rsi_1 = zx.q(result)
            uint64_t i
            
            do
                int64_t* rbx_2 = *(rdi_1 + arg_8)
                
                if (rbx_2 != 0)
                    (*(*rbx_2 + 0xf8))(rbx_2, 2, zx.q(r14.b))
                    result = (*(*rbx_2 + 0xf8))(rbx_2, 1, zx.q(r15.b))
                
                rdi_1 = &rdi_1[1]
                i = rsi_1
                rsi_1 -= 1
            while (i != 1)
        
        rbp += 1
    while (rbp u< result_1)

return result
