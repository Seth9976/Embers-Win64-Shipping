// 函数: sub_141931530
// 地址: 0x141931530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void** result = *(arg1 + 0x570)
int32_t i_4 = 0
char var_68 = 0
int32_t rbx = *(result[0xf] + 0x5e8)
char r8_1

if (*(arg2 + 0x198) == rbx)
    r8_1 = data_143eff5c6
else
    uint64_t rcx_1 = zx.q(rbx)
    int64_t r8
    
    if (data_143eff5c6 == 0)
        r8 = data_143effe60(rcx_1)
    else
        r8 = data_143f00478(rcx_1)
    
    *(arg2 + 0x198) = rbx
    *(arg2 + 0x19c) = *(*(*(arg1 + 0x570) + 0x78) + 0x5ec)
    result = sub_141940dd0(*(arg1 + 0x568), 0, r8)
    *(arg1 + 0x560) = 0
    r8_1 = data_143eff5c6
    var_68 = r8_1

if (data_143efed00 == 0)
    void* rdx = *(arg1 + 0x570)
    void* rax_7 = *(rdx + 0x98)
    uint32_t rcx_5 = -1
    uint32_t var_64_1
    uint32_t var_60_1
    uint32_t var_5c_1
    
    if (data_143f01c92 == 0)
        if (rax_7 == 0)
            var_64_1 = 0xffffffff
        else
            var_64_1 = zx.d(*(*(rax_7 + 0x38) + 0xb3))
        
        void* rax_15 = *(rdx + 0xa0)
        
        if (rax_15 == 0)
            var_60_1 = 0xffffffff
        else
            var_60_1 = zx.d(*(*(rax_15 + 0x38) + 0xb3))
        
        void* rax_17 = *(rdx + 0xa8)
        
        if (rax_17 == 0)
            var_5c_1 = 0xffffffff
        else
            var_5c_1 = zx.d(*(*(rax_17 + 0x38) + 0xb3))
    else
        var_5c_1 = 0xffffffff
        
        if (rax_7 == 0)
            var_64_1 = 0xffffffff
        else
            var_64_1 = zx.d(*(*(rax_7 + 0x38) + 0xb3))
            rcx_5 = -1
        
        void* rax_9 = *(rdx + 0xa0)
        
        if (rax_9 != 0)
            rcx_5 = zx.d(*(*(rax_9 + 0x38) + 0xb3))
        
        void* rax_11 = *(rdx + 0xa8)
        var_60_1 = rcx_5
        
        if (rax_11 != 0)
            var_5c_1 = zx.d(*(*(rax_11 + 0x38) + 0xb3))
    
    void* r14_1 = *(rdx + 0x78)
    uint32_t r12_1 = zx.d(*(*(*(rdx + 0x90) + 0x38) + 0xb3))
    uint32_t rsi_1 = zx.d(*(*(*(rdx + 0x88) + 0x38) + 0xb3))
    int16_t var_50
    int64_t var_4e
    
    if (r8_1 != 0)
        int32_t i = 0
        int32_t r15_1 = *(r14_1 + 0xb0)
        var_4e = 0
        var_50 = 0x6276
        
        if (*(r14_1 + 0x9b) u> 0)
            do
                int64_t* rcx_8 = &var_4e
                char rdx_3 = (i s/ 0xa).b
                
                if (i s>= 0xa)
                    var_4e.b = rdx_3 + 0x30
                    rcx_8 = &var_4e:1
                
                *rcx_8 = i.b - rdx_3 * 0xa + 0x30
                *(rcx_8 + 1) = 0
                int32_t rax_25 = sub_14193d070(r15_1, &var_50)
                
                if (rax_25 s>= 0)
                    sub_14193cec0(r15_1, rax_25, i)
                
                i += 1
            while (i s< zx.d(*(r14_1 + 0x9b)))
    
    sub_141931d00(arg1, arg2, rsi_1, arg1 + 0x580, 0, var_68)
    void* r14_2 = *(*(arg1 + 0x570) + 0x78)
    
    if (data_143eff5c6 != 0)
        int32_t i_1 = 0
        int32_t r15_2 = *(r14_2 + 0x168)
        var_4e = 0
        var_50 = 0x6270
        
        if (*(r14_2 + 0x153) u> 0)
            do
                int64_t* rcx_12 = &var_4e
                char rdx_9 = (i_1 s/ 0xa).b
                
                if (i_1 s>= 0xa)
                    var_4e.b = rdx_9 + 0x30
                    rcx_12 = &var_4e:1
                
                *rcx_12 = i_1.b - rdx_9 * 0xa + 0x30
                *(rcx_12 + 1) = 0
                int32_t rax_34 = sub_14193d070(r15_2, &var_50)
                
                if (rax_34 s>= 0)
                    sub_14193cec0(r15_2, rax_34, i_1 + rsi_1)
                
                i_1 += 1
            while (i_1 s< zx.d(*(r14_2 + 0x153)))
    
    result = sub_141931d00(arg1, arg2, r12_1, arg1 + 0x6d0, rsi_1, var_68)
    uint32_t rsi_2 = rsi_1 + r12_1
    
    if (var_64_1 s>= 0)
        void* r14_3 = *(*(arg1 + 0x570) + 0x78)
        
        if (data_143eff5c6 != 0)
            int32_t i_2 = 0
            int32_t r15_3 = *(r14_3 + 0x220)
            var_4e = 0
            var_50 = 0x6267
            
            if (*(r14_3 + 0x20b) u> 0)
                do
                    int64_t* rcx_16 = &var_4e
                    char rdx_15 = (i_2 s/ 0xa).b
                    
                    if (i_2 s>= 0xa)
                        var_4e.b = rdx_15 + 0x30
                        rcx_16 = &var_4e:1
                    
                    *rcx_16 = i_2.b - rdx_15 * 0xa + 0x30
                    *(rcx_16 + 1) = 0
                    int32_t rax_43 = sub_14193d070(r15_3, &var_50)
                    
                    if (rax_43 s>= 0)
                        sub_14193cec0(r15_3, rax_43, i_2 + rsi_2)
                    
                    i_2 += 1
                while (i_2 s< zx.d(*(r14_3 + 0x20b)))
        
        result = sub_141931d00(arg1, arg2, var_64_1, arg1 + 0x740, rsi_2, var_68)
        rsi_2 += var_64_1
    
    if (var_60_1 s>= 0)
        void* r14_4 = *(*(arg1 + 0x570) + 0x78)
        
        if (data_143eff5c6 != 0)
            int32_t i_3 = 0
            int32_t r15_4 = *(r14_4 + 0x2d8)
            var_4e = 0
            var_50 = 0x6268
            
            if (*(r14_4 + 0x2c3) u> 0)
                do
                    int64_t* rcx_20 = &var_4e
                    char rdx_21 = (i_3 s/ 0xa).b
                    
                    if (i_3 s>= 0xa)
                        var_4e.b = rdx_21 + 0x30
                        rcx_20 = &var_4e:1
                    
                    *rcx_20 = i_3.b - rdx_21 * 0xa + 0x30
                    *(rcx_20 + 1) = 0
                    int32_t rax_52 = sub_14193d070(r15_4, &var_50)
                    
                    if (rax_52 s>= 0)
                        sub_14193cec0(r15_4, rax_52, i_3 + rsi_2)
                    
                    i_3 += 1
                while (i_3 s< zx.d(*(r14_4 + 0x2c3)))
        
        result = sub_141931d00(arg1, arg2, var_60_1, arg1 + 0x5f0, rsi_2, var_68)
        rsi_2 += var_60_1
    
    void* rdi
    
    if (var_5c_1 s< 0)
        rdi = arg2
    else
        void* rbx_1 = *(*(arg1 + 0x570) + 0x78)
        
        if (data_143eff5c6 != 0)
            int32_t r14_5 = *(rbx_1 + 0x390)
            var_4e = 0
            var_50 = 0x6264
            
            if (*(rbx_1 + 0x37b) u> 0)
                do
                    int64_t* rcx_24 = &var_4e
                    char rdx_27 = (i_4 s/ 0xa).b
                    
                    if (i_4 s>= 0xa)
                        var_4e.b = rdx_27 + 0x30
                        rcx_24 = &var_4e:1
                    
                    *rcx_24 = i_4.b - rdx_27 * 0xa + 0x30
                    *(rcx_24 + 1) = 0
                    int32_t rax_61 = sub_14193d070(r14_5, &var_50)
                    
                    if (rax_61 s>= 0)
                        sub_14193cec0(r14_5, rax_61, i_4 + rsi_2)
                    
                    i_4 += 1
                while (i_4 s< zx.d(*(rbx_1 + 0x37b)))
        
        rdi = arg2
        result = sub_141931d00(arg1, rdi, var_5c_1, arg1 + 0x660, rsi_2, var_68)
    
    if (data_143f00398 != 0)
        result = sub_14194d9e0(arg1, rdi, *(*(arg1 + 0x570) + 0x78) + 0x640)

__security_check_cookie(rax_1 ^ &var_98)
return result
