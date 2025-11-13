// 函数: sub_14196a3f0
// 地址: 0x14196a3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int32_t r10 = arg1[2].d
int64_t* rdi = nullptr
uint64_t result = 0
int32_t var_1b8 = 0
void* rsi = nullptr
int32_t var_198 = 0
int32_t rcx = r10
void* var_58 = nullptr
int32_t var_50 = 0
int32_t var_4c = 0x40
void var_158

if (r10 s> 0x40)
    result = sub_1419834a0(&var_158, r10)
    r10 = arg1[2].d
    rcx = r10
    rsi = var_58

int32_t r14 = 0

if (r10 s> 0)
    do
        result = sub_140b187a0(*(rdi + arg1[1]) + 0x30)
        int64_t rbx_1 = sx.q(var_50)
        int32_t rsi_1 = result.d
        int32_t rcx_4 = (rbx_1 + 1).d
        var_50 = rcx_4
        
        if (rcx_4 s> var_4c)
            result = sub_1408091d0(&var_158, rbx_1.d)
        
        void* rdx_2 = &var_158
        
        if (var_58 != 0)
            rdx_2 = var_58
        
        r14 += 1
        rdi = &rdi[1]
        *(rdx_2 + (rbx_1 << 2)) = rsi_1
        r10 = arg1[2].d
        rcx = r10
    while (r14 s< r10)
    
    rsi = var_58

int32_t var_1a0 = 0
int32_t r13 = 0
int32_t r9 = 0

if (r10 s> 0)
    void* r11_1 = &var_158
    result = 0
    
    if (rsi != 0)
        r11_1 = rsi
    
    do
        int32_t r8 = *(r11_1 + (result << 2))
        void* rcx_7 = r11_1 + (result << 2)
        
        if (r9 s< rcx - 1)
            while (*(rcx_7 + 4) + r8 s<= arg1[3].d)
                result += 1
                r9 += 1
                r8 += *(r11_1 + (result << 2))
                rcx_7 = r11_1 + (result << 2)
                
                if (result s>= sx.q(rcx - 1))
                    break
        
        r9 += 1
        r13 += 1
        result += 1
    while (r9 s< r10)
    
    var_1a0 = r13

int32_t rcx_19 = arg1[2].d

if (r13 s>= *(arg1 + 0x1c))
    int32_t var_1b4_1 = 0
    int32_t r15_2 = 0
    int32_t r11_2 = 0
    
    if (rcx_19 s> 0)
        int64_t r14_2 = 0
        
        while (true)
            void* r8_1 = &var_158
            int32_t rbx_4 = r15_2
            
            if (rsi != 0)
                r8_1 = rsi
            
            int32_t var_19c_1 = rbx_4
            int32_t rdx_10 = *(r8_1 + (r14_2 << 2))
            void* rax_10 = r8_1 + (r14_2 << 2)
            
            if (r15_2 s< rcx_19 - 1)
                while (*(rax_10 + 4) + rdx_10 s<= arg1[3].d)
                    r14_2 += 1
                    rbx_4 += 1
                    rdx_10 += *(r8_1 + (r14_2 << 2))
                    rax_10 = r8_1 + (r14_2 << 2)
                    
                    if (r14_2 s>= sx.q(rcx_19 - 1))
                        break
                
                var_19c_1 = rbx_4
            
            int64_t* rcx_23 = data_143f0f180
            uint64_t result_1 =
                (*(*rcx_23 + 0x478))(rcx_23, zx.q(r11_2), zx.q(r13), zx.q(*(*arg1 + 0x8c)), var_1b8)
            int32_t rax_12 = data_14399e5dc
            int64_t r15_3 = arg1[1] + (sx.q(r15_2) << 3)
            void** lpTlsValue_1 = TlsGetValue(data_143cf0950)
            void** lpTlsValue = lpTlsValue_1
            
            if (lpTlsValue_1 == 0)
                void** lpTlsValue_2 = j_sub_140a82f30(zx.q((&lpTlsValue_1[3]).d))
                lpTlsValue = lpTlsValue_2
                
                if (lpTlsValue_2 == 0)
                    lpTlsValue = nullptr
                else
                    __builtin_memset(lpTlsValue_2, 0, 0x14)
                
                TlsSetValue(data_143cf0950, lpTlsValue)
            
            void*** rdi_3 = lpTlsValue[1]
            int32_t rcx_29
            
            if (rdi_3 != 0)
                rcx_29 = lpTlsValue[2].d
            else
                void* rax_13 = *lpTlsValue
                
                if (rax_13 == 0)
                    int64_t rax_14 = sub_14059e7c0(&data_143cf0958)
                    lpTlsValue[1] = rax_14
                    
                    if (rax_14 == 0)
                        int64_t* rax_15 = sub_140a82f70(0x2000, 0)
                        lpTlsValue[1] = rax_15
                        int64_t i_2 = 0x1f
                        int64_t* rcx_28
                        int64_t i
                        
                        do
                            rcx_28 = &rax_15[0x20]
                            *rax_15 = rcx_28
                            rax_15 = rcx_28
                            i = i_2
                            i_2 -= 1
                        while (i != 1)
                        *rcx_28 = i_2
                else
                    lpTlsValue[1] = rax_13
                    *lpTlsValue = rdi_3
                
                rdi_3 = lpTlsValue[1]
                rcx_29 = 0x20
                lpTlsValue[2].d = 0x20
            
            lpTlsValue[1] = *rdi_3
            lpTlsValue[2].d = rcx_29 - 1
            int64_t* var_188
            int64_t** rax_18 = sub_140a228d0(&var_188)
            int32_t rbx_7 = (var_1b8 | 2) & 0xfffffffd
            var_1b8 = rbx_7
            int64_t* rcx_31 = *rax_18
            *rax_18 = nullptr
            *rdi_3 = &data_142d40498
            int64_t* var_168_1 = rcx_31
            rdi_3[1].d = 0xff
            *(rdi_3 + 0xc) = 1
            *rdi_3 = &data_143002af8
            rdi_3[6].b = 0
            rdi_3[7] = rcx_31
            int64_t* rcx_32 = var_188
            
            if (rcx_32 != 0)
                rcx_32[9].d -= 1
                
                if (rcx_32[9].d == 1)
                    sub_140a2f6e0(rcx_32)
            
            if ((rbx_7.b & 1) != 0)
                var_1b8 = rbx_7 & 0xfffffffe
                int64_t* var_180
                
                if (var_180 != 0)
                    var_180[9].d -= 1
                    
                    if (var_180[9].d == 1)
                        sub_140a2f6e0(var_180)
            
            char rax_21 = *(arg1 + 0x14)
            rdi_3[4] = result_1
            rdi_3[5].b = rax_21
            rdi_3[2] = r15_3
            rdi_3[3].d = rbx_4 - r15_2 + 1
            int64_t* r13_4 = rdi_3[7]
            int64_t* rbx_9 = r13_4
            int64_t* var_1a8_1 = rbx_9
            
            if (r13_4 != 0)
                r13_4[9].d += 1
                rbx_9 = var_1a8_1
            
            sub_1419879e0(rdi_3, nullptr, rax_12, 1)
            int32_t rax_22 = data_143f0f008
            int32_t rcx_37
            
            if (rax_22 != 0x400)
                if (rax_22 != 0x800 || data_14399e5c8 != 0)
                    rcx_37 = data_143f0f00c | rax_22
                else
                    rcx_37 = data_143f0f010
            else if (data_143cf0848 == 0)
                if (data_14399e5cc != 0)
                    rcx_37 = data_143f0f00c | rax_22
                else
                    rcx_37 = data_143f0f010
            else if (data_143f0f014 == 1 || data_14399e5cc == 0)
                rcx_37 = data_143f0f010
            else
                rcx_37 = data_143f0f00c | rax_22
            
            int64_t* var_160_1 = rbx_9
            *(*arg3 + 0x4c) = rcx_37 | 0xff | 0x200
            
            if (rbx_9 != 0)
                r13_4[9].d += 1
                rbx_9 = var_1a8_1
            
            void* rsi_4 = *arg3 + 0x18
            int64_t r15_4 = sx.q(*(rsi_4 + 0x28))
            int32_t rax_24 = (r15_4 + 1).d
            *(rsi_4 + 0x28) = rax_24
            
            if (rax_24 s> *(rsi_4 + 0x2c))
                sub_14083a490(rsi_4, r15_4.d)
            
            void* rax_25 = *(rsi_4 + 0x20)
            
            if (rax_25 != 0)
                rsi_4 = rax_25
            
            int64_t** rcx_42 = rsi_4 + (r15_4 << 3)
            
            if (rcx_42 != 0)
                *rcx_42 = rbx_9
                
                if (rbx_9 != 0)
                    rbx_9[9].d += 1
                    rbx_9 = var_1a8_1
            
            if (r13_4 != 0)
                r13_4[9].d -= 1
                
                if (r13_4[9].d == 1)
                    sub_140a2f6e0(r13_4)
                
                rbx_9 = var_1a8_1
            
            void* r15_5 = *arg1
            void*** rcx_46 = (*(r15_5 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_27 = &rcx_46[5]
            
            if (rax_27 u> *(r15_5 + 0x38))
                sub_140b0e3d0(r15_5 + 0x30, 0x30)
                rcx_46 = (*(r15_5 + 0x30) + 7) & 0xfffffffffffffff8
                rax_27 = &rcx_46[5]
            
            *(r15_5 + 0x30) = rax_27
            void**** rax_28 = *(r15_5 + 8)
            *(r15_5 + 0x14) += 1
            *rax_28 = rcx_46
            *(r15_5 + 8) = &rcx_46[1]
            rcx_46[1] = 0
            *rcx_46 = &data_143002ad8
            rcx_46[2] = rbx_9
            
            if (r13_4 != 0)
                r13_4[9].d += 1
                rbx_9 = var_1a8_1
            
            result = result_1
            r13 = var_1a0
            *(rcx_46 + 0x24) = var_1b4_1
            r11_2 = var_1b4_1 + 1
            r15_2 = var_19c_1 + 1
            rcx_46[3] = result
            r14_2 += 1
            rcx_46[4].d = r13
            var_1b4_1 = r11_2
            
            if (rbx_9 != 0)
                result = zx.q(r13_4[9].d)
                r13_4[9].d -= 1
                
                if (result.d == 1)
                    result = sub_140a2f6e0(var_1a8_1)
                    r11_2 = var_1b4_1
            
            rcx_19 = arg1[2].d
            
            if (r15_2 s>= rcx_19)
                break
            
            rsi = var_58
        
        rsi = var_58
else
    int32_t i_1 = 0
    
    if (rcx_19 s> 0)
        int64_t* rsi_2 = nullptr
        
        do
            void* rdi_2 = *arg1
            int64_t r15_1 = *(rsi_2 + arg1[1])
            void*** rcx_10 = (*(rdi_2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_4 = &rcx_10[4]
            
            if (rax_4 u> *(rdi_2 + 0x38))
                sub_140b0e3d0(rdi_2 + 0x30, 0x28)
                rcx_10 = (*(rdi_2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_4 = &rcx_10[4]
            
            *(rdi_2 + 0x30) = rax_4
            *(rdi_2 + 0x14) += 1
            **(rdi_2 + 8) = rcx_10
            *(rdi_2 + 8) = &rcx_10[1]
            rcx_10[1] = 0
            *rcx_10 = &data_143002ae8
            rcx_10[2] = 0
            rcx_10[3] = r15_1
            void* rbx_3 = *arg1
            void*** rdx_7 = (*(rbx_3 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_7 = &rdx_7[3]
            
            if (rax_7 u> *(rbx_3 + 0x38))
                sub_140b0e3d0(rbx_3 + 0x30, 0x20)
                rdx_7 = (*(rbx_3 + 0x30) + 7) & 0xfffffffffffffff8
                rax_7 = &rdx_7[3]
            
            *(rbx_3 + 0x30) = rax_7
            *(rbx_3 + 0x14) += 1
            i_1 += 1
            rsi_2 = &rsi_2[1]
            **(rbx_3 + 8) = rdx_7
            *(rbx_3 + 8) = &rdx_7[1]
            result = zx.q(*(*arg1 + 0x8c))
            rdx_7[1] = 0
            *rdx_7 = &data_142f11588
            rdx_7[2].d = result.d
        while (i_1 s< arg1[2].d)
        
        rsi = var_58

if (rsi != 0)
    result = sub_140a74f90(rsi)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
