// 函数: sub_141fd2580
// 地址: 0x141fd2580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4e8
int64_t rax_1 = __security_cookie ^ &var_4e8
int32_t rbx = 0
int64_t* var_498 = arg1
int64_t i_3 = 4
int32_t var_4c8 = 0
int64_t i_4 = 4
void var_488
void* rax_2 = &var_488
int128_t zmm0
int128_t zmm1
int64_t i

do
    rax_2 += 0x80
    zmm0 = *arg2
    zmm1 = arg2[1]
    arg2 = &arg2[8]
    *(rax_2 - 0x80) = zmm0
    zmm0 = arg2[-6]
    *(rax_2 - 0x70) = zmm1
    zmm1 = arg2[-5]
    *(rax_2 - 0x60) = zmm0
    zmm0 = arg2[-4]
    *(rax_2 - 0x50) = zmm1
    zmm1 = arg2[-3]
    *(rax_2 - 0x40) = zmm0
    zmm0 = arg2[-2]
    *(rax_2 - 0x30) = zmm1
    zmm1 = arg2[-1]
    *(rax_2 - 0x20) = zmm0
    *(rax_2 - 0x10) = zmm1
    i = i_4
    i_4 -= 1
while (i != 1)
zmm1 = arg2[1]
*rax_2 = *arg2
zmm0 = arg2[2]
*(rax_2 + 0x10) = zmm1
*(rax_2 + 0x20) = zmm0
int64_t* result

if (sub_140a80f40() == 0)
    uint32_t rax_4
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_4.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_4.b == 0))
        void*** rax_6 = j_sub_140a82f30(0x260)
        void*** rdi_1 = rax_6
        int64_t* var_4c0
        
        if (rax_6 == 0)
            rdi_1 = nullptr
        else
            int64_t var_4b0_1 = 0
            *rdi_1 = &data_142d40498
            var_4c0 = nullptr
            rdi_1[1].d = 0xff
            *(rdi_1 + 0xc) = 1
            rdi_1[0x4a].b = 0
            *rdi_1 = &data_143296ab0
            rdi_1[0x4b] = 0
            rbx = 4
        
        if ((rbx.b & 8) != 0)
            rbx &= 0xfffffff7
            int64_t* var_4a8
            
            if (var_4a8 != 0)
                var_4a8[9].d -= 1
                
                if (var_4a8[9].d == 1)
                    sub_140a2f6e0(var_4a8)
        
        if ((4 & rbx.b) != 0 && var_4c0 != 0)
            var_4c0[9].d -= 1
            
            if (var_4c0[9].d == 1)
                sub_140a2f6e0(var_4c0)
        
        void* rax_9 = &rdi_1[2]
        int64_t** rcx_6 = &var_498
        int128_t zmm0_1
        int64_t i_1
        
        do
            rax_9 += 0x80
            zmm0_1 = *rcx_6
            zmm1 = *(rcx_6 + 0x10)
            rcx_6 = &rcx_6[0x10]
            *(rax_9 - 0x80) = zmm0_1
            zmm0_1 = *(rcx_6 - 0x60)
            *(rax_9 - 0x70) = zmm1
            zmm1 = *(rcx_6 - 0x50)
            *(rax_9 - 0x60) = zmm0_1
            zmm0_1 = *(rcx_6 - 0x40)
            *(rax_9 - 0x50) = zmm1
            zmm1 = *(rcx_6 - 0x30)
            *(rax_9 - 0x40) = zmm0_1
            zmm0_1 = *(rcx_6 - 0x20)
            *(rax_9 - 0x30) = zmm1
            zmm1 = *(rcx_6 - 0x10)
            *(rax_9 - 0x20) = zmm0_1
            *(rax_9 - 0x10) = zmm1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        zmm1 = *(rcx_6 + 0x10)
        *rax_9 = *rcx_6
        zmm0_1 = *(rcx_6 + 0x20)
        *(rax_9 + 0x10) = zmm1
        zmm1 = *(rcx_6 + 0x30)
        *(rax_9 + 0x20) = zmm0_1
        *(rax_9 + 0x30) = zmm1
        int64_t* rbx_1 = rdi_1[0x4b]
        int64_t* var_4b8_1 = rbx_1
        int32_t* rsi = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rsi += 1
            rbx_1 = var_4b8_1
        
        result = sub_141fed7e0(rdi_1, nullptr, 0xff, 1)
        
        if (rbx_1 != 0)
            int32_t rbp_1 = *rsi
            *rsi -= 1
            
            if (rbp_1 == 1)
                result = sub_140a2f6e0(var_4b8_1)
    else
        void var_258
        void* rax_5 = &var_258
        int64_t** rcx_1 = &var_498
        int64_t i_2
        
        do
            rax_5 += 0x80
            zmm0 = *rcx_1
            zmm1 = *(rcx_1 + 0x10)
            rcx_1 = &rcx_1[0x10]
            *(rax_5 - 0x80) = zmm0
            zmm0 = *(rcx_1 - 0x60)
            *(rax_5 - 0x70) = zmm1
            zmm1 = *(rcx_1 - 0x50)
            *(rax_5 - 0x60) = zmm0
            zmm0 = *(rcx_1 - 0x40)
            *(rax_5 - 0x50) = zmm1
            zmm1 = *(rcx_1 - 0x30)
            *(rax_5 - 0x40) = zmm0
            zmm0 = *(rcx_1 - 0x20)
            *(rax_5 - 0x30) = zmm1
            zmm1 = *(rcx_1 - 0x10)
            *(rax_5 - 0x20) = zmm0
            *(rax_5 - 0x10) = zmm1
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
        zmm1 = *(rcx_1 + 0x10)
        *rax_5 = *rcx_1
        zmm0 = *(rcx_1 + 0x20)
        *(rax_5 + 0x10) = zmm1
        zmm1 = *(rcx_1 + 0x30)
        *(rax_5 + 0x20) = zmm0
        *(rax_5 + 0x30) = zmm1
        void var_248
        result = sub_141fecb50(arg1, &var_248)
else
    result = sub_141fecb50(arg1, &var_488)

__security_check_cookie(rax_1 ^ &var_4e8)
return result
