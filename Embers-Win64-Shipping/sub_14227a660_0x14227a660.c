// 函数: sub_14227a660
// 地址: 0x14227a660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_658
int64_t rax_1 = __security_cookie ^ &var_658
void* rsi = arg2
void* rdx = arg1[0x44]

if (rsi == 0)
    rsi = rdx

sub_1422623c0(&arg1[0x1ca], rdx)
uint64_t result = arg1[0x288]

if (result == 0)
label_14227a6d7:
    int64_t rcx_2 = arg1[0x1ca]
    int32_t var_638
    
    if (rsi != rcx_2)
    label_14227a75e:
        int128_t zmm6 = *arg3
        
        if (zmm6.d f<= (zx.o(0)).q.d)
            int64_t rax_18 = *arg1
            int32_t var_634_1 = 1.d.d
            int32_t var_61c
            int32_t var_62c_1 = (var_61c & 0xfffffffe).d
            int32_t var_630_1 = 0x40000000
            var_638 = 0
            (*(rax_18 + 0x678))(arg1, rsi, &arg1[0x1ca], &var_638, var_638, var_630_1)
            result = sub_1422623c0(&arg1[0x1ca], arg1[0x44])
            arg1[0x288] = 0
        else
            if (result == 0)
                arg1[0x288] = rcx_2
            
            void var_618
            int64_t* rax_4 = (*(*arg1 + 0x668))(arg1, &var_618)
            arg1[0x1cc] = *rax_4
            arg1[0x1cd].d = rax_4[1].d
            *(arg1 + 0xe6c) = *(rax_4 + 0xc)
            *(arg1 + 0xe74) = *(rax_4 + 0x14)
            arg1[0x1cf].d = rax_4[3].d
            *(arg1 + 0xe7c) = *(rax_4 + 0x1c)
            arg1[0x1d0].d = rax_4[4].d
            *(arg1 + 0xe84) = *(rax_4 + 0x24)
            arg1[0x1d1].d = rax_4[5].d
            *(arg1 + 0xe8c) = *(rax_4 + 0x2c)
            arg1[0x1d2].d ^= (arg1[0x1d2].d ^ rax_4[6].d) & 1
            int32_t rax_13 = arg1[0x1d2].d
            arg1[0x1d2].d = ((rax_13 ^ rax_4[6].d) & 2) ^ rax_13
            *(arg1 + 0xe94) = *(rax_4 + 0x34)
            arg1[0x1d3].d = rax_4[7].d
            sub_1405af800(&arg1[0x1d4], &rax_4[8])
            arg1[0x27c] = rax_4[0xb0]
            
            if (&rax_4[0xb2] != &arg1[0x27e])
                if (arg1[0x284].b != 0)
                    arg1[0x284].b = 0
                
                if (rax_4[0xb8].b != 0)
                    *(arg1 + 0x13f0) = *(rax_4 + 0x590)
                    *(arg1 + 0x1400) = *(rax_4 + 0x5a0)
                    *(arg1 + 0x1410) = *(rax_4 + 0x5b0)
                    arg1[0x284].b = 1
            
            char var_58_1 = 0
            int64_t var_a8
            
            if (var_a8 != 0)
                sub_140a74f90(var_a8)
            
            uint128_t zmm0_3 = *arg3
            int64_t rax_17 = *arg1
            arg1[0x346].d = zmm6.d
            var_638.o = zmm0_3
            *(arg1 + 0x1a34) = zmm0_3
            (*(rax_17 + 0x678))(arg1, rsi, &arg1[0x288], &var_638, var_638)
            result = sub_1422623c0(&arg1[0x288], arg1[0x44])
    else if (result == 0)
        arg1[0x288] = 0
    else
        if ((arg1[0x348].b & 1) != 0)
            goto label_14227a75e
        
        int64_t* rbx_1 = arg1[0x44]
        result = sub_141dce620(rbx_1)
        
        if (result.b == 0)
            if ((*(rbx_1 + 0x294) & 2) != 0)
                result = (*(*rbx_1 + 0x6a8))(rbx_1)
            
            if ((*(rbx_1 + 0x294) & 2) == 0 || result.b == 0)
                result = sub_141dcdc50(arg1)
                
                if (result.d != 3)
                    var_638.o = *arg3
                    result = sub_142569970(arg1[0x44], rsi, &var_638)
        
        arg1[0x288] = 0
else
    sub_1422623c0(&arg1[0x288], arg1[0x44])
    result = arg1[0x288]
    
    if (result == 0 || rsi != result)
        goto label_14227a6d7

__security_check_cookie(rax_1 ^ &var_658)
return result
