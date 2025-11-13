// 函数: sub_1418e39e0
// 地址: 0x1418e39e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg2 + 0x4a0)

if (rcx == 0)
    return 

int64_t rbp
rbp.b = *(arg2 + 0x4a8) + 3 u< data_14399fa54

if (*(arg1 + 0x270) != 1)
    void* rax_3 = *(arg1 + 0x260)
    
    if (rcx != rax_3)
        void* rax_5 = *(arg1 + 0x268)
        
        if (rcx != rax_5)
            *(*(rcx + 8) + 0x10) = *(rcx + 0x10)
            *(*(rcx + 0x10) + 8) = *(rcx + 8)
        else
            void* rax_6 = *(rax_5 + 0x10)
            *(arg1 + 0x268) = rax_6
            *(rax_6 + 8) = 0
    else
        void* rax_4 = *(rax_3 + 8)
        *(arg1 + 0x260) = rax_4
        *(rax_4 + 0x10) = 0
    
    j_sub_140a74f90(rcx)
    (*(*(arg1 + 0x258) + 8))(arg1 + 0x258, zx.q(*(arg1 + 0x270) - 1))
else
    sub_14101ebf0(arg1 + 0x258)

int32_t rax_10 = *(arg2 + 0x4ac)
*(arg2 + 0x4a0) = 0
*(arg1 + 0x278) -= rax_10
*(arg1 + 0x27c) -= 1
sub_1418de630(arg2, rbp.b)
