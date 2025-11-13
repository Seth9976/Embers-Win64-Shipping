// 函数: sub_1414619c0
// 地址: 0x1414619c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1[1]
int32_t r9_2 = rcx s/ 7
int32_t rcx_1 = rcx s% 7
uint64_t r8_2 = zx.q(r9_2 s/ 5)
int32_t r9_3 = r9_2 - (r8_2 * 5).d
int32_t var_44 = r9_3
int32_t rdx_3 = r8_2.d & 0x80000001

if (rdx_3 s< 0)
    rdx_3 = ((rdx_3 - 1) | 0xfffffffe) + 1

bool cond:0 = rdx_3 == 1
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(r8_2.d)
int32_t temp6
int32_t temp7
temp6:temp7 = sx.q((temp5 - temp4) s>> 1)
bool var_40 = cond:0
int32_t rdx_8 = temp6 & 3
int32_t rax_11 = temp7 + rdx_8
int32_t r11 = (rax_11 & 3) - rdx_8 + 1
int32_t var_3c = r11
int32_t r8_5 = rax_11 s>> 2 & 0x80000001

if (r8_5 s< 0)
    r8_5 = ((r8_5 - 1) | 0xfffffffe) + 1

rdx_8.b = r8_5 == 1
uint32_t result

if (rcx_1 u<= 6)
    result = 1
    
    if (rcx_1 == 0)
        result = 4
    
    if (r11 s<= result)
        if (cond:0 == 0)
        label_141461aad:
            
            if (((rcx_1 & 0xfffffffb) == 0 || r9_3 != 1) && (rcx_1 - 2 u<= 1 || r9_3 != 2))
                if (rcx_1 == 0)
                label_141461af0:
                    
                    if (r9_3 != 0 || rdx_8.b == 0 || rcx_1 u<= 6)
                        int128_t zmm0 = rcx_1.o
                        char r8_8
                        
                        if ((zmm0.q u>> 0x20).d != 0 || ((rcx_1 - 2) & 0xfffffffd) != 0)
                            r8_8 = 1
                            
                            if (zmm0.d == rcx_1)
                                goto label_141461b41
                        else
                            r8_8 = rdx_8.b
                        label_141461b41:
                            
                            if ((zmm0.q u>> 0x20).d == r9_3 && zmm0:8.b == cond:0
                                    && (zmm0:8.q u>> 0x20).d == r11 && r8_8 == rdx_8.b)
                                return sub_141461df0(rcx_1, *arg1) __tailcall
                else if ((rcx_1 - 2 u<= 2 || r9_3 != 3) && (rcx_1 == 0 || r9_3 != 4))
                    goto label_141461af0
        else if (r9_3 == 0 && rcx_1 - 2 u<= 2)
            goto label_141461aad

result.b = 0
return result
