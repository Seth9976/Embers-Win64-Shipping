// 函数: sub_142a9e060
// 地址: 0x142a9e060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t arg_8 = 0x5b
sub_142a48d70(arg2, &arg_8, 0, 1)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg1 + 0x1c))
uint64_t rax_3 = zx.q((temp1 - temp0) s>> 1)
int64_t r15 = sx.q(rax_3.d)
int32_t* rdx_2

if (rax_3.d s> 1)
    rdx_2 = *(arg1 + 0x10)

if (rax_3.d s<= 1 || *rdx_2 != 0 || rdx_2[sx.q(((rax_3 << 1) + -ffffffffffffffff).d)] != 0x110000)
    int64_t rsi_1 = 0
    
    if (r15 s> 0)
        do
            int64_t rax_7 = *(arg1 + 0x10)
            int32_t r14_2 = *(rax_7 + (rsi_1 << 3))
            int32_t rbx_4 = *(rax_7 + (rsi_1 << 3) + 4) - 1
            sub_142a9df60(arg2, r14_2, arg3)
            
            if (r14_2 != rbx_4)
                if (r14_2 + 1 != rbx_4)
                    arg_8 = 0x2d
                    sub_142a48d70(arg2, &arg_8, 0, 1)
                
                sub_142a9df60(arg2, rbx_4, arg3)
            
            rsi_1 += 1
        while (rsi_1 s< r15)
else
    arg_8 = 0x5e
    sub_142a48d70(arg2, &arg_8, 0, 1)
    int64_t rsi = 1
    
    if (1 s< r15)
        do
            int64_t rax_5 = *(arg1 + 0x10)
            int32_t r14_1 = *(rax_5 + (rsi << 3) - 4)
            int32_t rbx_2 = *(rax_5 + (rsi << 3)) - 1
            sub_142a9df60(arg2, r14_1, arg3)
            
            if (r14_1 != rbx_2)
                if (r14_1 + 1 != rbx_2)
                    arg_8 = 0x2d
                    sub_142a48d70(arg2, &arg_8, 0, 1)
                
                sub_142a9df60(arg2, rbx_2, arg3)
            
            rsi += 1
        while (rsi s< r15)

void* rax_9 = *(arg1 + 0x50)

if (rax_9 != 0)
    int32_t i = 0
    
    if (*(rax_9 + 8) s> 0)
        do
            arg_8 = 0x7b
            sub_142a48d70(arg2, &arg_8, 0, 1)
            void* rax_10 = sub_142ae72d0(*(arg1 + 0x50), i)
            int32_t rsi_2 = 0
            
            if (sub_142a4a1f0(rax_10) s> 0)
                int32_t rax_13
                
                do
                    int32_t rax_12 = sub_142a486d0(rax_10, rsi_2)
                    sub_142a9df60(arg2, rax_12, arg3)
                    int32_t rcx_14
                    rcx_14.b = rax_12 u> 0xffff
                    rsi_2 += rcx_14 + 1
                    rax_13 = sub_142a4a1f0(rax_10)
                while (rsi_2 s< rax_13)
            
            arg_8 = 0x7d
            sub_142a48d70(arg2, &arg_8, 0, 1)
            i += 1
        while (i s< *(*(arg1 + 0x50) + 8))

arg_8 = 0x5d
return sub_142a48d70(arg2, &arg_8, 0, 1)
