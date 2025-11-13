// 函数: sub_142430bf0
// 地址: 0x142430bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40f8)
void var_4108
int64_t rax_1 = __security_cookie ^ &var_4108
int32_t* rdx = arg1[0x12]
int64_t r8 = sx.q(arg1[0x13].d)
int64_t r11_1 = r8 << 6
int32_t i_1 = *rdx
int64_t rax_3 = *(rdx + 0x28) + r11_1
void** rsi = arg1
uint64_t rcx = zx.q(rdx[7])
int32_t rdi = rdx[6] + (rcx << 1).d
uint32_t rax_5 = zx.d(rsi[0x14].b)
int32_t var_4098 = rcx.d
uint64_t rcx_1 = zx.q(rax_5)
char var_40c4 = rax_5.b
uint64_t result = *(rdx + 0x48)
int64_t var_4060 = r8
int32_t r14 = -1
int64_t var_4068 = r11_1
int32_t var_40b0 = rdi
int32_t r15_2 = *(rsi + 0x9c) * i_1 + *(result + (rcx_1 << 2))

if (r15_2 u>= *(result + (rcx_1 << 2) + 4))
    r15_2 = -1

int32_t var_3c = 0x4000
int128_t* r12 = nullptr
uint32_t r10 = 0
int128_t* var_48 = nullptr
uint32_t var_40 = 0

if (i_1 != 0)
    int64_t var_4090_1 = 0
    int32_t rcx_3 = neg.d(r15_2)
    int64_t var_4088_1 = 0x20
    result = 1
    int32_t i = i_1
    void** rbx = rsi
    int32_t result_1 = 1
    
    do
        if ((*(rsi + 0xa1) & result.b) != 0)
            void* rdx_1 = rsi[0x12]
            int64_t rcx_4 = sx.q(r15_2)
            int32_t r8_1 = *(*(rdx_1 + 0x38) + (r8 << 2) + 4)
            int32_t r9_1
            
            if (r15_2 u>= r8_1)
                r9_1 = *(*(rdx_1 + 0x28) + r11_1 + 0x20)
            else
                r9_1 = *(*(rdx_1 + 0x58) + (rcx_4 << 2))
            
            int32_t r13_1
            
            if (r15_2 + 1 u>= r8_1)
                r13_1 = *(*(rdx_1 + 0x28) + r11_1 + 0x20)
            else
                r13_1 = *(*(rdx_1 + 0x58) + (rcx_4 << 2) + 4)
            
            int32_t rax_12 = r9_1
            
            if (r14 != 0xffffffff)
                rax_12 = r14
            
            uint32_t r13_2 = r13_1 - r9_1
            int32_t rax_14 = r9_1 - rax_12
            uint64_t rax_17 = zx.q(*(zx.q(rcx_3 + r15_2) + rdx_1 + 0x20))
            int32_t var_40c8_1 = rax_17.d
            uint64_t r9_2 = rax_17 * 0x28
            int32_t rcx_6 = *(r9_2 + &data_1439c85ec)
            int32_t r8_2 = *(r9_2 + 0x1439c85e8)
            uint32_t temp0_1 = divu.dp.d(0:(rcx_6 - 1 + rdi), rcx_6)
            uint32_t count = divu.dp.d(0:(r8_2 - 1 + rdi), r8_2) * (&data_1439c85f4)[rax_17 * 0xa]
            uint64_t rax_25 = zx.q(*(var_4090_1 + rax_3 + 0x38))
            uint32_t r11_3 = count * temp0_1
            uint64_t var_40e8
            uint64_t var_40e0
            int32_t r14_3
            int32_t var_40d8
            int32_t var_40d0
            int32_t var_4078
            int32_t var_4070
            void var_4048
            
            if (rax_25.d u> 6)
            label_142431347:
                r14_3 = var_40c8_1
                var_40e8 = &data_143f5ec4c
                sub_142448b30(rbx, rdi, rdi, r14_3, var_40e8)
                rsi = arg1
            else
                switch (rax_25)
                    case 0
                        goto label_142431347
                    case 1
                        r14_3 = var_40c8_1
                        var_40e8 = &data_143a30868
                        sub_142448b30(rbx, rdi, rdi, r14_3, var_40e8)
                        rsi = arg1
                    case 2
                        r14_3 = var_40c8_1
                        var_40e8 = &data_143a3086c
                        sub_142448b30(rbx, rdi, rdi, r14_3, var_40e8)
                        rsi = arg1
                    case 3
                        r14_3 = var_40c8_1
                        var_40e8 = &data_143a30870
                        sub_142448b30(rbx, rdi, rdi, r14_3, var_40e8)
                        rsi = arg1
                    case 4
                        if (*(rbx + 0xc) != count)
                            if (r11_3 s> r10)
                                var_40 = r11_3
                                
                                if (r11_3 s> var_3c)
                                    sub_142442620(&var_4048, r10)
                                    r12 = var_48
                            else if (r11_3 s< r10)
                                uint32_t rdi_2 = r10 - r11_3
                                
                                if (r10 != r11_3)
                                    uint32_t rax_30 = r10 - rdi_2
                                    
                                    if (rax_30 != r11_3)
                                        int128_t* r9_7 = &var_4048
                                        
                                        if (r12 != 0)
                                            r9_7 = r12
                                        
                                        memmove(sx.q(r11_3) + r9_7, sx.q(rdi_2 + r11_3) + r9_7, 
                                            rax_30 - r11_3)
                                        r10 = var_40
                                        r12 = var_48
                                    
                                    var_40 = r10 - rdi_2
                            
                            int128_t* rdx_9 = &var_4048
                            
                            if (r12 != 0)
                                rdx_9 = r12
                            
                            int64_t* rcx_15 = arg1[0x10]
                            (*(*rcx_15 + 0x10))(rcx_15, rdx_9, zx.q(rax_14), zx.q(r13_2), var_40e8, 
                                var_40e0, var_40d8, var_40d0, var_40c8_1, rax_14, arg1, var_40b0, 
                                i_1, rax_12, var_4098, var_4090_1, var_4088_1)
                            int32_t rdi_4 = 0
                            
                            if (temp0_1 != 0)
                                do
                                    int128_t* rdx_10 = &var_4048
                                    
                                    if (var_48 != 0)
                                        rdx_10 = var_48
                                    
                                    memcpy(zx.q(*(rbx + 0xc) * rdi_4) + *rbx, 
                                        rdx_10 + zx.q(rdi_4 * count), count)
                                    rdi_4 += 1
                                while (rdi_4 u< temp0_1)
                            
                        label_142430f92:
                            r14_3 = var_40c8_1
                            rdi = var_40b0
                            rsi = arg1
                        else
                            rsi = arg1
                            int64_t* rcx_11 = rsi[0x10]
                            (*(*rcx_11 + 0x10))(rcx_11, *rbx, zx.q(rax_14), zx.q(r13_2), var_40e8, 
                                var_40e0, var_40d8, var_40d0, var_40c8_1, rax_14, arg1, var_40b0, 
                                i_1, rax_12, var_4098, var_4090_1, var_4088_1)
                            r14_3 = var_40c8_1
                    case 5
                        if (*(rbx + 0xc) != count)
                            if (r11_3 s> r10)
                                var_40 = r11_3
                                
                                if (r11_3 s> var_3c)
                                    sub_142442620(&var_4048, r10)
                                    r12 = var_48
                            else if (r11_3 s< r10)
                                uint32_t rdi_7 = r10 - r11_3
                                
                                if (r10 != r11_3)
                                    uint32_t rax_53 = r10 - rdi_7
                                    
                                    if (rax_53 != r11_3)
                                        int128_t* r9_17 = &var_4048
                                        
                                        if (r12 != 0)
                                            r9_17 = r12
                                        
                                        memmove(sx.q(r11_3) + r9_17, sx.q(rdi_7 + r11_3) + r9_17, 
                                            rax_53 - r11_3)
                                        r10 = var_40
                                        r12 = var_48
                                    
                                    var_40 = r10 - rdi_7
                            
                            int64_t* rdi_9 = arg1[0x10]
                            int128_t* rdx_25 = &var_4048
                            void var_4094
                            var_4070 = *sub_140b5e500(&var_4094, 0x101)
                            var_40d0 = 0
                            var_40d8 = 0
                            int32_t var_406c_1 = 0
                            
                            if (r12 != 0)
                                rdx_25 = r12
                            
                            var_40e0.d = r13_2
                            var_40e8 = zx.q(rax_14)
                            sub_140b025b0(var_4070.q, rdx_25, r11_3, rdi_9, var_40e8, var_40e0.d, 
                                var_40d8, var_40d0)
                            int32_t rdi_10 = 0
                            
                            if (temp0_1 != 0)
                                do
                                    int128_t* rdx_26 = &var_4048
                                    
                                    if (var_48 != 0)
                                        rdx_26 = var_48
                                    
                                    memcpy(zx.q(*(rbx + 0xc) * rdi_10) + *rbx, 
                                        rdx_26 + zx.q(rdi_10 * count), count)
                                    rdi_10 += 1
                                while (rdi_10 u< temp0_1)
                            
                            goto label_142430f92
                        
                        rsi = arg1
                        int64_t* rdi_5 = rsi[0x10]
                        void var_4058
                        var_4078 = *sub_140b5e500(&var_4058, 0x101)
                        var_40d0 = 0
                        var_40d8 = 0
                        int32_t var_4074_1 = 0
                        var_40e0.d = r13_2
                        var_40e8 = zx.q(rax_14)
                        sub_140b025b0(var_4078.q, *rbx, r11_3, rdi_5, var_40e8, var_40e0.d, 
                            var_40d8, var_40d0)
                        rdi = var_40b0
                        r14_3 = var_40c8_1
                    case 6
                        rsi = arg1
                        int64_t var_4080 = 0
                        int64_t* rcx_26 = rsi[0x10]
                        int128_t* r10_2 = (**rcx_26)(rcx_26, &var_4080, zx.q(rax_14), zx.q(r13_2), 
                            var_40e8, var_40e0, var_40d8, var_40d0, var_40c8_1, rax_14, arg1, 
                            var_40b0, i_1, rax_12, var_4098, var_4090_1, var_4088_1, var_4080, 
                            var_4078, var_4070, var_4068, var_4060)
                        
                        if (var_4080 s< zx.q(r13_2))
                            uint32_t rax_43 = var_40
                            
                            if (r13_2 s> rax_43)
                                var_40 = r13_2
                                
                                if (r13_2 s> var_3c)
                                    sub_142442620(&var_4048, rax_43)
                            else if (r13_2 s< rax_43)
                                uint32_t r12_3 = rax_43 - r13_2
                                
                                if (rax_43 != r13_2)
                                    uint32_t rcx_29 = rax_43 - r12_3
                                    
                                    if (rcx_29 != r13_2)
                                        int128_t* r9_12 = &var_4048
                                        
                                        if (var_48 != 0)
                                            r9_12 = var_48
                                        
                                        memmove(sx.q(r13_2) + r9_12, sx.q(r12_3 + r13_2) + r9_12, 
                                            rcx_29 - r13_2)
                                        rax_43 = var_40
                                    
                                    var_40 = rax_43 - r12_3
                            
                            int128_t* rdx_17 = &var_4048
                            int64_t* rcx_33 = rsi[0x10]
                            
                            if (var_48 != 0)
                                rdx_17 = var_48
                            
                            (*(*rcx_33 + 0x10))(rcx_33, rdx_17, zx.q(rax_14), zx.q(r13_2))
                            r10_2 = &var_4048
                            
                            if (var_48 != 0)
                                r10_2 = var_48
                        
                        uint64_t r9_14 = zx.q(*(rbx + 0xc))
                        var_40e0 = r9_14
                        var_40e8 = zx.q(r9_14.d * temp0_1)
                        sub_141c798b0(*(rsi[0x11] + var_4088_1), r10_2, r13_2, *rbx, var_40e8.d, 
                            var_40e0.d)
                        r14_3 = var_40c8_1
            
            if (data_143f5e3fc != 0)
                var_40e0.d = zx.d(var_40c4)
                var_40e8.d = r14_3
                sub_14242d470(rbx, rdi, rdi, var_4098 + 4, var_40e8.d, var_40e0.d)
            
            r8 = var_4060
            i = i_1
            r14 = rax_12
            r11_1 = var_4068
            result = zx.q(result_1)
            r12 = var_48
            r10 = var_40
        
        var_4090_1 += 1
        r15_2 += 1
        var_4088_1 += 8
        rbx = &rbx[2]
        result_1 = rol.d(result.d, 1)
        result = zx.q(result_1)
    while (rcx_3 + r15_2 u< i)

int64_t* rcx_22 = rsi[0x10]
rsi[0x10] = 0

if (rcx_22 != 0)
    result = zx.q(rcx_22[1].d)
    rcx_22[1].d -= 1
    
    if (result.d == 1)
        result = (*(*rcx_22 + 0x18))(rcx_22, 1)
    
    r12 = var_48

if (r12 != 0)
    result = sub_140a74f90(r12)

__security_check_cookie(rax_1 ^ &var_4108)
return result
