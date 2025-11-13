// 函数: sub_1422407f0
// 地址: 0x1422407f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int64_t i_5 = sx.q(*(arg1 + 0x160))
int64_t rsi = sx.q(*(arg1 + 0x140))
int32_t rax_2 = *(arg1 + 0x120)
int32_t rdi = (rsi + i_5).d

if (rdi s> rax_2)
    *(arg1 + 0x120) = rdi
    
    if (rdi s> *(arg1 + 0x124))
        sub_1405c4f50(arg1 + 0x118)
else if (rdi s< rax_2 && rdi != rax_2)
    *(arg1 + 0x120) = rdi
    sub_1407c4120(arg1 + 0x118)

int64_t result = zx.q(*(arg1 + 0x130))

if (rdi s> result.d)
    *(arg1 + 0x130) = rdi
    
    if (rdi s> *(arg1 + 0x134))
        result = sub_1405a4d70(arg1 + 0x128)
else if (rdi s< result.d && rdi != result.d)
    *(arg1 + 0x130) = rdi
    result = sub_1405c53d0(arg1 + 0x128)

if (*(arg1 + 0x148) != 0)
    *(arg1 + 0x154) = 0
    
    if (rsi.d s<= 0)
        *(arg1 + 0x150) = 0
    else
        void* rax_3 = sub_142240500(arg1 + 0x40, (rsi * 3).d << 4)
        int32_t rdx_8
        
        if (rsi s<= 0)
            rdx_8 = *(arg1 + 0x154)
        else
            int64_t r9_1 = 0
            int64_t r10_1 = 0
            
            do
                int64_t* rcx_6 = *(arg1 + 0x30)
                void* rdx_7 = sx.q(*(arg1 + 0x154)) * 0x30 + rax_3
                int64_t r8_1 = sx.q(*(*(rcx_6 + r10_1) + 0x38))
                void* rax_5 = *(rcx_6 + r10_1 + 8)
                int32_t rcx_7
                
                if (rax_5 == 0)
                    rcx_7 = -1
                else
                    rcx_7 = *(rax_5 + 0x38)
                
                int32_t rax_6 = *(arg1 + 0x16c)
                
                if ((r8_1.d s< rax_6 || r8_1.d s>= *(arg1 + 0x168))
                        && (rcx_7 s< rax_6 || rcx_7 s>= *(arg1 + 0x168)))
                    *rdx_7 = (r8_1 << 5) + *(arg1 + 0x110)
                    int64_t rax_12
                    
                    if (rcx_7 == 0xffffffff)
                        rax_12 = 0
                    else
                        rax_12 = (sx.q(rcx_7) << 5) + *(arg1 + 0x110)
                    
                    *(rdx_7 + 8) = rax_12
                    *(rdx_7 + 0x14) = zx.d(r8_1.w)
                    *(rdx_7 + 0x18) = zx.d(rcx_7.w)
                    *(rdx_7 + 0x10) = 0xffffffff
                    *(rdx_7 + 0x28) = 0
                    *(rdx_7 + 0x20) = *(*(arg1 + 0x10) + (r9_1 << 3))
                    *(rdx_7 + 0x1e) = 1
                    *(arg1 + 0x154) += 1
                
                rdx_8 = *(arg1 + 0x154)
                r9_1 += 1
                r10_1 += 0x10
            while (r9_1 s< rsi)
        
        if (data_143f51534 == 0)
            *(arg1 + 0x150) = rdx_8
            int32_t rax_18 = rdx_8 + *(arg1 + 0x120)
            *(arg1 + 0x120) = rax_18
            
            if (rax_18 s> *(arg1 + 0x124))
                sub_1405c4f50(arg1 + 0x118)
            
            memcpy(*(arg1 + 0x118), rax_3, *(arg1 + 0x150) * 0x30)
            result = zx.q(*(arg1 + 0x154))
            int32_t i = 0
            
            if (result.d s> 0)
                int64_t rdx_11 = 0
                
                do
                    int64_t rax_20 = *(arg1 + 0x128)
                    rdx_11 += 8
                    *(rdx_11 + rax_20 - 8) = i
                    i += 1
                    *(rdx_11 + rax_20 - 4) = 1
                    result = zx.q(*(arg1 + 0x154))
                while (i s< result.d)
        else
            *(arg1 + 0x150) = PxBatchConstraints(rax_3, rdx_8, *(arg1 + 0x110), 
                zx.q(*(arg1 + 0x28)), *(arg1 + 0x128), *(arg1 + 0x118))
            result = zx.q(*(arg1 + 0x154))
        
        int32_t i_1 = 0
        
        if (result.d s> 0)
            int64_t* rdi_2 = nullptr
            int64_t rsi_1 = 0
            
            do
                result = *(arg1 + 0x118)
                int64_t rbp_1 = sx.q(*(*(result + rsi_1 + 0x20) + 8))
                
                if (rbp_1.d != i_1)
                    int64_t rcx_14 = *(arg1 + 0x138)
                    int64_t i_4 = sx.q(i_1)
                    int128_t* rax_22 = rbp_1 * 0x1e0 + rcx_14
                    int128_t* rdx_13 = i_4 * 0x1e0 + rcx_14
                    int128_t zmm1
                    
                    if (rdx_13 != rax_22)
                        void var_218
                        void* rcx_15 = &var_218
                        int128_t* r8_6 = rdx_13
                        int64_t j_5 = 3
                        int128_t zmm0_1
                        int64_t j
                        
                        do
                            rcx_15 += 0x80
                            zmm0_1 = *r8_6
                            zmm1 = r8_6[1]
                            r8_6 = &r8_6[8]
                            *(rcx_15 - 0x80) = zmm0_1
                            zmm0_1 = r8_6[-6]
                            *(rcx_15 - 0x70) = zmm1
                            zmm1 = r8_6[-5]
                            *(rcx_15 - 0x60) = zmm0_1
                            zmm0_1 = r8_6[-4]
                            *(rcx_15 - 0x50) = zmm1
                            zmm1 = r8_6[-3]
                            *(rcx_15 - 0x40) = zmm0_1
                            zmm0_1 = r8_6[-2]
                            *(rcx_15 - 0x30) = zmm1
                            zmm1 = r8_6[-1]
                            *(rcx_15 - 0x20) = zmm0_1
                            *(rcx_15 - 0x10) = zmm1
                            j = j_5
                            j_5 -= 1
                        while (j != 1)
                        zmm1 = r8_6[1]
                        *rcx_15 = *r8_6
                        zmm0_1 = r8_6[2]
                        *(rcx_15 + 0x10) = zmm1
                        zmm1 = r8_6[3]
                        *(rcx_15 + 0x20) = zmm0_1
                        zmm0_1 = r8_6[4]
                        *(rcx_15 + 0x30) = zmm1
                        zmm1 = r8_6[5]
                        uint64_t j_4 = zx.q((j_5 + 3).d)
                        *(rcx_15 + 0x40) = zmm0_1
                        *(rcx_15 + 0x50) = zmm1
                        int128_t* rcx_16 = rax_22
                        uint64_t j_1
                        
                        do
                            rdx_13 = &rdx_13[8]
                            zmm0_1 = *rcx_16
                            rcx_16 = &rcx_16[8]
                            rdx_13[-8] = zmm0_1
                            rdx_13[-7] = rcx_16[-7]
                            rdx_13[-6] = rcx_16[-6]
                            rdx_13[-5] = rcx_16[-5]
                            rdx_13[-4] = rcx_16[-4]
                            rdx_13[-3] = rcx_16[-3]
                            rdx_13[-2] = rcx_16[-2]
                            rdx_13[-1] = rcx_16[-1]
                            j_1 = j_4
                            j_4 -= 1
                        while (j_1 != 1)
                        *rdx_13 = *rcx_16
                        rdx_13[1] = rcx_16[1]
                        rdx_13[2] = rcx_16[2]
                        rdx_13[3] = rcx_16[3]
                        rdx_13[4] = rcx_16[4]
                        void* rcx_17 = &var_218
                        rdx_13[5] = rcx_16[5]
                        uint64_t j_3 = zx.q((j_4 + 3).d)
                        uint64_t j_2
                        
                        do
                            rax_22 = &rax_22[8]
                            zmm0_1 = *rcx_17
                            zmm1 = *(rcx_17 + 0x10)
                            rcx_17 += 0x80
                            rax_22[-8] = zmm0_1
                            zmm0_1 = *(rcx_17 - 0x60)
                            rax_22[-7] = zmm1
                            zmm1 = *(rcx_17 - 0x50)
                            rax_22[-6] = zmm0_1
                            zmm0_1 = *(rcx_17 - 0x40)
                            rax_22[-5] = zmm1
                            zmm1 = *(rcx_17 - 0x30)
                            rax_22[-4] = zmm0_1
                            zmm0_1 = *(rcx_17 - 0x20)
                            rax_22[-3] = zmm1
                            zmm1 = *(rcx_17 - 0x10)
                            rax_22[-2] = zmm0_1
                            rax_22[-1] = zmm1
                            j_2 = j_3
                            j_3 -= 1
                        while (j_2 != 1)
                        zmm1 = *(rcx_17 + 0x10)
                        *rax_22 = *rcx_17
                        zmm0_1 = *(rcx_17 + 0x20)
                        rax_22[1] = zmm1
                        zmm1 = *(rcx_17 + 0x30)
                        rax_22[2] = zmm0_1
                        zmm0_1 = *(rcx_17 + 0x40)
                        rax_22[3] = zmm1
                        zmm1 = *(rcx_17 + 0x50)
                        rax_22[4] = zmm0_1
                        rax_22[5] = zmm1
                    
                    int128_t* r11_3 = (i_4 << 4) + *(arg1 + 0x30)
                    int128_t* rcx_20 = (rbp_1 << 4) + *(arg1 + 0x30)
                    
                    if (r11_3 != rcx_20)
                        zmm1 = *r11_3
                        *r11_3 = *rcx_20
                        *rcx_20 = zmm1
                    
                    int64_t rax_23 = *(arg1 + 0x10)
                    int64_t rdx_14 = *(rdi_2 + rax_23)
                    *(rdi_2 + rax_23) = *(rax_23 + (rbp_1 << 3))
                    *(rax_23 + (rbp_1 << 3)) = rdx_14
                    *(*(rdi_2 + *(arg1 + 0x10)) + 8) = i_1
                    result = *(arg1 + 0x10)
                    *(*(result + (rbp_1 << 3)) + 8) = rbp_1.d
                    *(arg1 + 0x148) = 1
                
                i_1 += 1
                rsi_1 += 0x30
                rdi_2 = &rdi_2[1]
            while (i_1 s< *(arg1 + 0x154))

if (i_5.d s<= 0)
    *(arg1 + 0x14c) = 0
else
    void* rax_26 = sub_142240500(arg1 + 0x40, ((i_5 << 1).d + i_5.d) << 4)
    int64_t i_3 = i_5
    
    if (i_5.d s> 0)
        int64_t r9_3 = 0
        void* r8_8 = rax_26 + 0x14
        int64_t i_2
        
        do
            r8_8 += 0x30
            int32_t* rdx_19 = *(arg1 + 0x158) + r9_3
            r9_3 += 0x14
            *(r8_8 - 0x44) = (sx.q(*rdx_19) << 5) + *(arg1 + 0x110)
            *(r8_8 - 0x3c) = (zx.q(rdx_19[1]) << 5) + *(arg1 + 0x110)
            *(r8_8 - 0x30) = zx.d(*rdx_19)
            *(r8_8 - 0x2c) = zx.d(rdx_19[1].w)
            *(r8_8 - 0x34) = 0xffffffff
            *(r8_8 - 0x1c) = 0
            *(r8_8 - 0x24) = rdx_19
            *(r8_8 - 0x26) = 0
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
    
    result = PxBatchConstraints(rax_26, zx.q(i_5.d), *(arg1 + 0x110), zx.q(*(arg1 + 0x28)), 
        *(arg1 + 0x128) + (zx.q(*(arg1 + 0x150)) << 3), 
        sx.q(*(arg1 + 0x154)) * 0x30 + *(arg1 + 0x118))
    *(arg1 + 0x14c) = result.d

__security_check_cookie(rax_1 ^ &var_258)
return result
