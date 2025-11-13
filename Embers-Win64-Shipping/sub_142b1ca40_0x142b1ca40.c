// 函数: sub_142b1ca40
// 地址: 0x142b1ca40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r15 = arg3
int64_t rbp = arg6[3]
int32_t rbx_2 = ((arg6[4] - rbp) s>> 1).d
sub_142a4afe0(arg5)
int16_t rax = *(arg5 + 8)
int32_t r8_1

if (rax s< 0)
    r8_1 = *(arg5 + 0xc)
else
    r8_1 = sx.d(rax) s>> 5

int32_t var_48 = 0
sub_142a49390(arg5, 0, r8_1, rbp, 0, rbx_2)

if (arg4 != 0)
    var_48.q = arg7
    return sub_142b1c660(arg1, arg2, r15, arg6, nullptr)

char r14 = 0
uint64_t rsi
rsi.b = 0
char arg_20 = 0
rbp.b = 1
int16_t* rbx_3 = arg2

if (arg2 != r15)
    while (true)
        uint32_t r8_3 = zx.d(*rbx_3)
        int16_t* r14_1 = rbx_3
        rbx_3 = &rbx_3[1]
        int32_t rax_6
        
        if ((r8_3 & 0xfffff800) == 0xd800)
            uint32_t rcx_4
            
            if (not(test_bit(r8_3, 0xa)) && rbx_3 != r15)
                rcx_4 = zx.d(*rbx_3)
            
            if (test_bit(r8_3, 0xa) || rbx_3 == r15 || (rcx_4 & 0xfffffc00) != 0xdc00)
                rax_6 = *(*(arg1 + 0x20) + 0x14) - 1
            else
                rbx_3 = &rbx_3[1]
                int32_t rdx_5 = ((r8_3 - 0xd7f7) << 0xa) + rcx_4
                int64_t* rcx_5 = *(arg1 + 0x20)
                
                if (rdx_5 s< rcx_5[3].d)
                    rax_6 = sub_142b6a760(rcx_5, rdx_5)
                else
                    rax_6 = *(rcx_5 + 0x14) - 2
        else
            rax_6 = zx.d(*(**(arg1 + 0x20) + (zx.q(r8_3) u>> 6 << 1))) + (r8_3 & 0x3f)
        
        uint16_t r8_5 = *(*(*(arg1 + 0x20) + 8) + (sx.q(rax_6) << 1))
        
        if (r8_5 u>= 0xfc00)
            r8_5 u>>= 1
        label_142b1cbe0:
            
            if (r8_5.b != 0)
                rsi = zx.q(rsi.b)
                r14 = r8_5.b
                
                if (rbp.b != 0)
                    rsi = zx.q(r8_5.b)
                
                arg_20 = r8_5.b
                rbp.b = 0
                
                if (rbx_3 == r15)
                    break
                
                continue
        else if (r8_5 u>= *(arg1 + 0x12) && *(arg1 + 0x1a) u> r8_5)
            uint64_t rax_13 = *(arg1 + 0x30)
            uint64_t rcx_8 = zx.q(r8_5) u>> 1
            
            if ((*(rax_13 + (rcx_8 << 1)) & 0x80) == 0)
                rax_13.b = 0
            else
                rax_13 = zx.q(*(rax_13 + (rcx_8 << 1) - 2))
            
            r8_5 = zx.w(rax_13.b)
            goto label_142b1cbe0
        
        rbx_3 = r14_1
        r14 = arg_20
        break

if (r15 == 0)
    r15 = sub_142a8c220(rbx_3, 0)

int32_t var_40
var_40.b = r14
char result = sub_142b19b80(arg6, arg2, ((rbx_3 - arg2) s>> 1).d, 0, 0, var_40.b, arg7)

if (result == 0)
    return result

return sub_142b1a0e0(arg6, rbx_3, r15, arg7)
