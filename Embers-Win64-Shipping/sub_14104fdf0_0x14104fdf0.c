// 函数: sub_14104fdf0
// 地址: 0x14104fdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t j_3 = arg1
int32_t j_5 = *(arg3 + 0x34)
void* i = arg3
int32_t j_4 = *(arg2 + 0x34)
int32_t j_2 = j_5
void* r14 = arg2

if (j_4 u<= j_5)
    j_2 = j_4

int32_t r13 = j_5 - j_2
j_3 = j_2
int32_t rsi = j_4 - j_2
int32_t arg_10 = r13
int32_t arg_18 = rsi

while (i != 0)
    void* rax_1 = *(r14 + 0x70)
    void* rax_3 = *(r14 + 0xc0)
    void* rbx_2 = **(rax_1 + 0x6d8) + 0x1c0
    int32_t rcx = *(rax_3 + 0xf0)
    sub_1410129f0(rbx_2, rax_3, rcx, 0x400, 0xffffffff)
    void* rax_4 = *(i + 0xc0)
    int32_t rcx_2 = *(rax_4 + 0xf0)
    sub_1410129f0(rbx_2, rax_4, rcx_2, 0x800, 0xffffffff)
    void* rdi_1 = *(rbx_2 + 8)
    int32_t rdx_2 = *(rdi_1 + 0x128)
    int64_t* rcx_4 = *(rdi_1 + 0x30)
    
    if (rdx_2 != 0)
        (*(*rcx_4 + 0xd0))(rcx_4, rdx_2, *(rdi_1 + 0x120))
        *(rdi_1 + 0x128) = 0
    
    if (j_2 != 0)
        int32_t rdi_2 = r13
        uint64_t j_1 = zx.q(j_2)
        uint64_t j
        
        do
            int32_t var_68_1 = rsi - r13 + rdi_2
            void* rax_8 = *(i + 0xc0)
            int64_t var_78 = *(*(r14 + 0xc0) + 0x20)
            int32_t var_70_1 = 0
            int64_t* rax_9 = *(rax_1 + 0x6d8)
            int64_t var_a8 = *(rax_8 + 0x20)
            int32_t var_a0_1 = 0
            int32_t var_98_1 = rdi_2
            void* rcx_7 = *rax_9
            *(rcx_7 + 0x3b90) += 1
            int64_t* rcx_8 = *(*(rbx_2 + 8) + 0x30)
            (*(*rcx_8 + 0x80))(rcx_8, &var_78, 0, 0, 0, &var_a8, 0)
            void* rdx_4 = *(r14 + 0xc0)
            char rax_12 = data_1439b4ad4
            void* rcx_9 = *(rdx_4 + 0x28)
            
            if (rcx_9 == 0)
                if (rax_12 != 0 && *(rdx_4 + 0x38) != 0)
                    sub_141026da0(*(*(rbx_2 + 8) + 0x118), rdx_4 + 0x30)
                    rax_12 = data_1439b4ad4
            else if (rax_12 != 0 && *(rcx_9 + 0x30) != 0)
                sub_141026da0(*(*(rbx_2 + 8) + 0x118), rcx_9 + 0x28)
                rax_12 = data_1439b4ad4
            
            void* rdx_6 = *(i + 0xc0)
            void* rcx_12 = *(rdx_6 + 0x28)
            
            if (rcx_12 == 0)
                if (rax_12 != 0 && *(rdx_6 + 0x38) != 0)
                    sub_141026da0(*(*(rbx_2 + 8) + 0x118), rdx_6 + 0x30)
            else if (rax_12 != 0 && *(rcx_12 + 0x30) != 0)
                sub_141026da0(*(*(rbx_2 + 8) + 0x118), rcx_12 + 0x28)
            
            rdi_2 += 1
            j = j_1
            j_1 -= 1
        while (j != 1)
        j_2 = j_3
        r13 = arg_10
        rsi = arg_18
    
    sub_1410129f0(rbx_2, rax_4, 0x800, rcx_2, 0xffffffff)
    sub_1410129f0(rbx_2, rax_3, 0x400, rcx, 0xffffffff)
    void* rax_13 = *(r14 + 0x120)
    r14 = rax_13 - 0x68
    void* rax = *(i + 0x120)
    
    if (rax_13 == 0)
        r14 = nullptr
    
    i = rax - 0x68
    
    if (rax == 0)
        i = nullptr
    
    if (r14 == 0)
        break
