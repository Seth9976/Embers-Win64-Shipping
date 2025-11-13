// 函数: sub_1422bfee0
// 地址: 0x1422bfee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1422c0220(arg1 + 0x818, arg2)
int64_t* result = (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x840)) << 5, sx.q(*(arg1 + 0x844)) << 5)
int64_t* rsi = *(arg1 + 0x848)

if (rsi != 0)
    (*(*arg2 + 8))(arg2, 0xc0, 0xc0)
    result = (*(*rsi + 0x210))(rsi, arg2)

if (*(arg1 + 0x800) != 0)
    (*(*arg2 + 8))(arg2, 0x18, 0x18)
    void* rbx_1 = *(arg1 + 0x800)
    int64_t r9_1 = *arg2
    (*(r9_1 + 8))(arg2, sx.q(*(rbx_1 + 0x10)) * 0x1660, sx.q(*(rbx_1 + 0x14)) * 0x1660, r9_1)
    void* i_1 = *(rbx_1 + 8)
    result = sx.q(*(rbx_1 + 0x10))
    void* r15_2 = result * 0x1660 + i_1
    
    if (i_1 != r15_2)
        void* r14_1 = i_1 + 0x1630
        
        do
            (*(*arg2 + 8))(arg2, sx.q(*(r14_1 - 0x20)) << 4, sx.q(*(r14_1 - 0x1c)) << 4)
            int64_t r9_2 = *arg2
            (*(r9_2 + 8))(arg2, zx.q(*r14_1 + 0x1f) u>> 5 << 2, 
                zx.q(*(r14_1 + 4) + 0x1f) u>> 5 << 2, r9_2)
            int64_t rdx_11 = sx.q(*(r14_1 + 0x20)) << 2
            result = (*(*arg2 + 8))(arg2, rdx_11, rdx_11)
            void* i = i_1
            
            if (i_1 != r14_1 - 0x30)
                do
                    result = sub_1422bf3f0(i, arg2)
                    i += 0x58
                while (i != r14_1 - 0x30)
            
            i_1 += 0x1660
            r14_1 += 0x1660
        while (i_1 != r15_2)

return result
