// 函数: sub_14128cbb0
// 地址: 0x14128cbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi
void* var_10 = rsi
void var_288
int64_t rax_1 = __security_cookie ^ &var_288
void* rbx = arg2
int128_t var_1e8 = zx.o(0)
int128_t var_1d8
__builtin_memset(&var_1d8, 0, 0x60)
int128_t var_118

if ((not.b(arg9.b) & 1) == 0)
    rsi.b = 0
else
    rsi = *(arg1 + 8)
    
    if (rsi == 0)
        rsi.b = 0
    else
        void* rcx = *(rsi + 0xf80)
        char rax_3
        
        if (rcx == 0 || (*(rcx + 0x20) & 4) != 0)
            rax_3 = 0
        else if (sub_1413faff0(rcx) == 0)
            rax_3 = 1
        else if (sub_1410a09e0((*U"1111")[sx.q(*(rsi + 8))]) == 0)
            rax_3 = 0
        else
            rax_3 = 1
        
        if (arg8 u> 1)
            if (rax_3 != 0 && (*(*(rsi + 0x6328) + 1) != 0 || (*(*(rsi + 0xf80) + 0x20) & 2) == 0))
                goto label_14128cd88
            
            rsi.b = 0
        else if (rax_3 == 0)
            rsi.b = 0
        else
            if (*(*(rsi + 0x6328) + 1) != 0 && (*(*(rsi + 0xf80) + 0x20) & 2) != 0)
                goto label_14128cd88
            
            if ((*(*(rsi + 0xf80) + 0x20) & 2) != 0)
                rsi.b = 0
            else
                int32_t rbx_2 = (*U"1111")[sx.q(*(rsi + 8))]
                
                if (sub_1410a09e0(rbx_2) != 0)
                label_14128cd7e:
                    rbx = arg2
                label_14128cd88:
                    
                    if (data_143f552a4 == 0 || data_143f552a3 == 0 || arg5 == 0
                            || *(arg5 + 0x32) != 0)
                        rsi.b = 1
                    else
                        void* rcx_7 = *(rbx + 0x88)
                        
                        if (rcx_7 == 0)
                            rsi.b = 1
                        else
                            *(arg1 + 0x10)
                            
                            if (sub_1422e4ff0(rcx_7, &var_118)[0x16].d != 2)
                                rsi.b = 1
                            else if ((*(*arg7 + 0x28))(arg7) == 0)
                                rsi.b = 0
                            else
                                rsi.b = 1
                else
                    if (sub_1419a4830(rbx_2) != 0)
                        goto label_14128cd7e
                    
                    if (sub_1410a0ce0((*U"1111")[sx.q(*(rsi + 8))]) != 0)
                        goto label_14128cd7e
                    
                    rsi.b = 0

int64_t r8 = *arg7
void var_218
int32_t rbx_1

if (arg5 == 0 || (*(*(r8 + 0x1e8))(arg7, &var_218, r8) & 1) != 0)
    rbx_1 = 0
else
    rbx_1 = data_143f552ac
    int32_t rcx_3 = *(*(arg5 + 0x110) + 0xf8)
    
    if (rcx_3 s<= rbx_1)
        rbx_1 = rcx_3
    
    if (rbx_1 s> 0 && data_143f552b4 != 0)
        rbx_1 = 0x7fffffff

int64_t* rcx_10 = *(arg2 + 0x78)
void* rax_21 = (*(*rcx_10 + 0x40))(rcx_10)
int64_t r8_2 = *arg7

if ((not.b(*(*(r8_2 + 0x1e8))(arg7, &var_218, r8_2)) & 1) != 0)
    int32_t rcx_13 = data_143f552b0
    
    if (rcx_13 != 0)
        bool cond:1_1
        
        if (rsi.b == 0)
            cond:1_1 = rcx_13 == 1
        else
            cond:1_1 = rcx_13 == 2
        
        if (not(cond:1_1))
            rsi.b ^= 1

int128_t var_1b8
int128_t* var_260 = &var_1b8
int128_t* var_268 = &var_1e8
char r9 = rsi.b

if (rbx_1 == 1)
    sub_141252740(arg10, arg7, rax_21, r9, var_268, var_260)
else if (rbx_1 == 2)
    sub_1412530c0(arg10, arg7, rax_21, r9, var_268, var_260)
else if (rbx_1 == 3)
    sub_141253a40(arg10, arg7, rax_21, r9, var_268, var_260)
else if (rbx_1 == 4)
    sub_1412543c0(arg10, arg7, rax_21, r9, var_268, var_260)
else if (rbx_1 == 0x7fffffff)
    sub_1412556c0(arg10, arg7, rax_21, r9, var_268, var_260)
else
    sub_141254d40(arg10, arg7, rax_21, r9, var_268, var_260)

uint64_t rdx_4 = zx.q(*(arg1 + 0x10))
int64_t var_200 = 0
int64_t* rcx_15 = *(arg2 + 0x80)
int64_t* rax_24 = (*(*rcx_15 + 0x40))(rcx_15, rdx_4, &var_200)
int64_t rdx_5 = *rax_24
char rcx_17

if ((*(rdx_5 + 0x1c0))(rax_24, rdx_5) != 0 || (*(arg2 + 0x9c) & 0x200000) != 0)
    void* rax_26 = *(arg1 + 8)
    
    if (rax_26 == 0)
        rcx_17 = 0
    else if (sub_1419a51c0((*U"1111")[sx.q(*(rax_26 + 8))]) == 0)
        rcx_17 = 0
    else
        rcx_17 = 1
else
    rcx_17 = 0

int64_t var_178 = *(arg1 + 0x28)
int64_t var_170 = *(arg1 + 0x30)
int32_t var_168 = *(arg1 + 0x38)
int64_t var_160 = *(arg1 + 0x40)
int64_t var_158 = *(arg1 + 0x48)
int64_t var_150 = *(arg1 + 0x50)
int64_t var_148 = *(arg1 + 0x58)
int32_t var_140 = *(arg1 + 0x60)

if (*(arg1 + 0x6c) != 0)
    sub_141299330(&var_178, arg7)
else
    uint64_t var_170_1
    
    if (rcx_17 != 0)
        int32_t var_140_1 = 0
        var_170_1 = data_1439b53a0
    else if (*(arg1 + 0x6e) != 0 && sub_1422eb710().b != 0)
        int32_t rcx_20
        
        if (arg5 != 0)
            rcx_20 = 0x80
        
        if (arg5 == 0 || (*(arg5 + 0x35) & 8) != 0)
            rcx_20 = 0
        
        int32_t var_140_2 = rcx_20
        var_170_1 = data_1439b65e0

int64_t rax_38
uint64_t rbx_8

if (*(arg1 + 0x6c) == 0)
    uint64_t rax_36
    
    if (arg5 == 0)
        rax_36.b = 0
    else
        rax_36.b = *(arg5 + 0x38) u>> 3
        rax_36.b &= 1
    
    rbx_8 = zx.q(rax_36.b) * 2
    rax_38.b = arg8 == 1
else
    uint64_t rax_37 = sub_141091090(arg5, *(arg2 + 0x98))
    int16_t rcx_22
    
    if (((arg9 u>> 0xa).b & 1) == 0)
        rcx_22 = -1
        
        if ((rax_37 u>> 0x30).d + 1 u< 0xffff)
            rcx_22 = ((rax_37 u>> 0x30).d + 1).w
    else
        rcx_22 = 0
    
    rbx_8 = zx.q(rcx_22) << 0x30
    rax_38 = rax_37 & 0xffffffffffff

int32_t rcx_23 = *(arg2 + 0x9c)
int32_t rdi_8 =
    (((rcx_23 u>> 0x10 & 0x20) | (rcx_23 & 0x40)) u>> 3 | (rcx_23 & 2)) u>> 1 | (rcx_23 & 1) << 3
(*(*arg7 + 0x28))(arg7)
int32_t rsi_2 = rdi_8
int32_t r12_2

if ((*(*arg7 + 0xb0))(arg7) != 0 || (not.b((rdi_8 u>> 2).b) & 1) == 0)
    rdi_8 = zx.d(rdi_8.b)
    r12_2 = 1
else
    r12_2 = 2

rdi_8.b &= 1
int32_t rsi_4

if ((*(*arg7 + 0x28))(arg7) != 0 || rdi_8.b != 0)
    rsi_4 = 0
else
    rsi_4 = (rsi_2 u>> 3) + 1

void* rdx_11 = *(arg1 + 0x18)
var_260.b = 0
int64_t var_128 = *arg11
int128_t var_138 = zx.o(0)
var_268.d = arg4
sub_141458e70(&var_138, rdx_11, arg5, arg2, var_268.d, var_260.b)
int128_t zmm1 = var_1d8
int64_t* var_228 = &var_138
char var_230 = 0
var_118 = var_1e8
int64_t* var_250 = &var_118
int64_t* var_258 = &var_178
int128_t var_108 = zmm1
int128_t var_1c8
int128_t var_f8 = var_1c8
int128_t var_e8 = var_1b8
int128_t var_d8
__builtin_memset(&var_d8, 0, 0x30)
int64_t result = sub_141110750(arg1, arg2, arg3, arg5, arg6, arg7, var_258, var_250, r12_2, rsi_4, 
    rbx_8 | rax_38, var_230, var_228)
__security_check_cookie(rax_1 ^ &var_288)
return result
