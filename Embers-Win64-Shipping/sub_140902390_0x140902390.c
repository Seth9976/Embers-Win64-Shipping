// 函数: sub_140902390
// 地址: 0x140902390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t rsi

if (arg3 s< 0 || arg3 s> *(arg1 + 0x118))
    rsi = -1
else
    rsi = (divs.dp.q(sx.o(sx.q(*(arg1 + 0x120)) * arg3), sx.q(*(arg1 + 0x124)) * 0x989680)).d

int32_t var_78 = rsi

if (rsi != 0xffffffff)
    EnterCriticalSection(arg1 + 0x18)
    void* rax_6
    
    if (*(arg1 + 0x168) == 0)
        rax_6 = sub_140901e80(arg1 + 0x40, &var_78)
    else
        rax_6 = sub_140901f60(*(arg1 + 0x100), arg1 + 0x128)
    
    if (rax_6 != 0)
        int64_t r10_1 = sx.q(*(arg1 + 0x120))
        int32_t r9_1 = *(arg1 + 0x124)
        int64_t rax_10
        int64_t rdx_5
        rdx_5:rax_10 = sx.o(r10_1)
        int64_t rax_12 = (rax_10 - rdx_5) s>> 1
        int64_t temp0_2 = divs.dp.q(sx.o(rax_12 + zx.q(r9_1 * rsi) * 0x989680), r10_1)
        void*** rax_20 = sub_1408ff800()
        int64_t* rbp_2 = *rax_6
        rax_20[3] = divs.dp.q(sx.o(zx.q((rsi + 1) * r9_1) * 0x989680 + rax_12), r10_1) - temp0_2
        int64_t* rcx_7 = rbp_2[1]
        int64_t var_88 = *rbp_2
        int64_t* var_80_1 = rcx_7
        
        if (rcx_7 != 0)
            rcx_7[1].d += 1
            rcx_7 = var_80_1
        
        if (&var_88 != &rax_20[4])
            int128_t zmm1 = var_88.o
            int128_t var_50_1 = zmm1
            var_88.o = *(rax_20 + 0x20)
            rcx_7 = var_80_1
            *(rax_20 + 0x20) = zmm1
        
        if (rcx_7 != 0)
            rcx_7[1].d -= 1
            
            if (rcx_7[1].d == 1)
                (**var_80_1)(var_80_1)
                int32_t rax_25 = *(var_80_1 + 0xc)
                *(var_80_1 + 0xc) -= 1
                
                if (rax_25 == 1)
                    (*(*var_80_1 + 8))(var_80_1, 1)
        
        rax_20[6].d = rbp_2[2].d
        sub_140597df0(&rax_20[7], &rbp_2[3])
        rax_20[9].d = rbp_2[5].d
        *(rax_20 + 0x4c) = *(rbp_2 + 0x2c)
        sub_140597df0(&rax_20[0xa], &rbp_2[6])
        rax_20[0xc] = rbp_2[8]
        rax_20[0xd].b = rbp_2[9].b
        rax_20[0xe] = rbp_2[0xa]
        rax_20[0xf].d = rbp_2[0xb].d
        rax_20[0x10].d = *(arg1 + 0x110)
        *(rax_20 + 0x84) = *(arg1 + 0x114)
        rax_20[0x11] = temp0_2
        *arg2 = &rax_20[2]
        arg2[1] = rax_20
        
        if (rax_20 != 0)
            rax_20[1].d += 1
            
            if (rax_20 != 0)
                rax_20[1].d -= 1
                
                if (rax_20[1].d == 1)
                    (**rax_20)(rax_20)
                    int32_t r12_1 = *(rax_20 + 0xc)
                    *(rax_20 + 0xc) -= 1
                    
                    if (r12_1 == 1)
                        (*rax_20)[1](rax_20, zx.q(r12_1))
    else
        *arg2 = rax_6
        arg2[1] = rax_6
    
    if (arg1 != -0x18)
        LeaveCriticalSection(arg1 + 0x18)
else
    *arg2 = 0
    arg2[1] = 0

__security_check_cookie(rax_1 ^ &var_a8)
return arg2
