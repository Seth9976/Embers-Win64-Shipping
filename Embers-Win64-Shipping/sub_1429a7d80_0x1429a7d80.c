// 函数: sub_1429a7d80
// 地址: 0x1429a7d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg2
int64_t rax
int64_t rdx
rdx:rax = muls.dp.q(0x4924924924924925, arg2 - arg1)
int64_t i_1 = arg3
int64_t* j = arg1
uint64_t result = rdx s>> 4 u>> 0x3f
int64_t rdx_2 = (arg2 - arg1) s/ 0x38
int128_t var_68

if (rdx_2 s<= 0x20)
label_1429a7e96:
    
    if (rdx_2 s>= 2 && j != rsi)
        for (void* i = &j[7]; i != rsi; i += 0x38)
            int128_t zmm2 = *i
            void* i_2 = i
            int128_t zmm1 = *(i + 0x20)
            int96_t var_58_1 = (*(i + 0x10)).12
            int64_t r9_4 = zmm2.q
            int64_t var_38_1 = *(i + 0x30)
            var_68 = zmm2
            
            if (r9_4 u>= *j)
                int64_t rax_32 = *(i - 0x38)
                void* i_3 = i - 0x38
                
                while (r9_4 u< rax_32)
                    *i_2 = rax_32
                    *(i_2 + 8) = *(i_3 + 8)
                    *(i_2 + 0xa) = *(i_3 + 0xa)
                    *(i_2 + 0x10) = *(i_3 + 0x10)
                    *(i_2 + 0x18) = *(i_3 + 0x18)
                    *(i_2 + 0x20) = *(i_3 + 0x20)
                    *(i_2 + 0x28) = *(i_3 + 0x28)
                    *(i_2 + 0x30) = *(i_3 + 0x30)
                    *(i_2 + 0x34) = *(i_3 + 0x34)
                    i_2 = i_3
                    rax_32 = *(i_3 - 0x38)
                    i_3 -= 0x38
                
                *(i_2 + 8) = var_68:8.b
                int16_t rax_42 = var_68:0xa.w
                *i_2 = r9_4
                *(i_2 + 0xa) = rax_42
                *(i_2 + 0x10) = var_58_1.q
                *(i_2 + 0x18) = var_58_1:8.d
                *(i_2 + 0x20) = zmm1.q
                *(i_2 + 0x28) = zmm1:8.q
                *(i_2 + 0x30) = var_38_1.d
                result = zx.q(var_38_1:4.d)
                *(i_2 + 0x34) = result.d
            else
                void* rax_10 = i - 0x30
                void* rdx_12 = rax_10 + 0x68
                
                if (i != j)
                    do
                        rdx_12 -= 0x38
                        *rdx_12 = *(rax_10 - 8)
                        char rcx_12 = *rax_10
                        rax_10 -= 0x38
                        *(rdx_12 + 8) = rcx_12
                        *(rdx_12 + 0xa) = *(rax_10 + 0x3a)
                        *(rdx_12 + 0x10) = *(rax_10 + 0x40)
                        *(rdx_12 + 0x18) = *(rax_10 + 0x48)
                        *(rdx_12 + 0x20) = *(rax_10 + 0x50)
                        *(rdx_12 + 0x28) = *(rax_10 + 0x58)
                        *(rdx_12 + 0x30) = *(rax_10 + 0x60)
                        *(rdx_12 + 0x34) = *(rax_10 + 0x64)
                    while (rax_10 + 0x30 != j)
                
                j[1].b = var_68:8.b
                int16_t rax_12 = var_68:0xa.w
                *j = r9_4
                *(j + 0xa) = rax_12
                j[2] = var_58_1.q
                j[3].d = var_58_1:8.d
                j[4] = zmm1.q
                j[5] = zmm1:8.q
                j[6].d = var_38_1.d
                result = zx.q(var_38_1:4.d)
                *(j + 0x34) = result.d
else
    while (i_1 s> 0)
        int64_t* var_78
        sub_1429a7500(&var_78, j, rsi)
        int64_t* r12_1 = var_78
        uint64_t r9_3 = zx.q(arg4)
        i_1 = (i_1 s>> 1) + (i_1 s>> 2)
        int64_t* j_1
        
        if ((r12_1 - j) s/ 0x38 s>= (rsi - j_1) s/ 0x38)
            sub_1429a7d80(j_1, rsi, i_1, r9_3)
            rsi = r12_1
        else
            sub_1429a7d80(j, r12_1, i_1, r9_3)
            j = j_1
        
        int64_t rax_8
        int64_t rdx_10
        rdx_10:rax_8 = muls.dp.q(0x4924924924924925, rsi - j)
        result = rdx_10 s>> 4 u>> 0x3f
        rdx_2 = (rsi - j) s/ 0x38
        
        if (rdx_2 s<= 0x20)
            goto label_1429a7e96
    
    if (rdx_2 s<= 0x20)
        goto label_1429a7e96
    
    sub_1429a72a0(j, rsi)
    int64_t rax_18
    int64_t rdx_14
    rdx_14:rax_18 = muls.dp.q(0x4924924924924925, rsi - j)
    result = rdx_14 s>> 4 u>> 0x3f
    int64_t rdx_16 = (rsi - j) s/ 0x38
    
    if (rdx_16 s>= 2)
        void* rsi_1 = rsi - 0x2e
        
        if (rdx_16 s< 2)
            goto label_1429a808a
        
        int64_t rdx_19
        
        do
            int64_t rax_20 = *j
            char var_88_1 = arg4
            uint128_t zmm1_1 = *(rsi_1 + 6)
            var_68 = *(rsi_1 - 0xa)
            int128_t zmm0_1 = *(rsi_1 + 0x16)
            uint128_t var_58_2 = zmm1_1
            zmm1_1 = zx.o(*(rsi_1 + 0x26))
            *(rsi_1 - 0xa) = rax_20
            *(rsi_1 - 2) = j[1].b
            *rsi_1 = *(j + 0xa)
            *(rsi_1 + 6) = j[2]
            *(rsi_1 + 0xe) = j[3].d
            *(rsi_1 + 0x16) = j[4]
            *(rsi_1 + 0x1e) = j[5]
            *(rsi_1 + 0x26) = j[6].d
            *(rsi_1 + 0x2a) = *(j + 0x34)
            uint64_t var_38_2 = zmm1_1.q
            int128_t var_48_2 = zmm0_1
            std::_Pop_heap_hole_by_index<struct GSISymbolEntry* __ptr64,struct GSISymbolEntry,class <lambda_e19a14271c24f61a19fa61e1244ecbc2> >(
                j, 0, (-0xa - j + rsi_1) s/ 0x38, &var_68)
        label_1429a808a:
            rsi_1 -= 0x38
            int64_t rax_30
            rdx_19:rax_30 = muls.dp.q(0x4924924924924925, 0x2e - j + rsi_1)
        while ((0x2e - j + rsi_1) s/ 0x38 s>= 2)
        
        return rdx_19 s>> 4 u>> 0x3f
return result
