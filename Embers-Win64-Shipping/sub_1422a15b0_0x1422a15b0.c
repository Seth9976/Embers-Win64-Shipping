// 函数: sub_1422a15b0
// 地址: 0x1422a15b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result_1 = arg1[0x18]
void* result = nullptr
int64_t rdi = arg2
void* rax_1
int64_t rax_2
void* rdx

if (result_1 != 0)
    rax_1 = sub_142577430()
    rdx = *(result_1 + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (result_1 == 0 || rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    result_1 = nullptr

void* rax_5 = (*(*arg1 + 0x6a8))(arg1, rdi, 0)

if (rax_5 != 0 && arg4 == 0 && *(rax_5 + 0xa0) == 0 && *(rax_5 + 0xc) s>= 0)
    return nullptr

int64_t rbx_1

if (result_1 == 0)
    rbx_1 = 0
else
    void* rax_9
    int64_t rax_10
    void* rdx_3
    
    do
        rbx_1 = rdi
        rdi = *(result_1 + 0xc8)
        result = result_1
        void* rax_8 = (*(*result_1 + 0x6a8))(result_1, rbx_1, 0)
        
        if (rax_8 == 0)
            break
        
        if (*(rax_8 + 0xa0) == 0)
            break
        
        result_1 = *(result_1 + 0xc0)
        
        if (result_1 == 0)
            break
        
        rax_9 = sub_142577430()
        rdx_3 = *(result_1 + 0x10)
        rax_10 = sx.q(*(rax_9 + 0x38))
        
        if (rax_10.d s> *(rdx_3 + 0x38))
            break
    while (*(*(rdx_3 + 0x30) + (rax_10 << 3)) == rax_9 + 0x30)

if (arg3 != 0)
    *arg3 = rbx_1

return result
