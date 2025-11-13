// 函数: sub_142424970
// 地址: 0x142424970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0xd4) & 1) == 0)
    int64_t rdx
    rdx.b = 1
    (*(*arg1 + 0x2b0))(arg1, rdx)

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f5d3b0 s> *rbx_1)
    _Init_thread_header(&data_143f5d3b0)
    
    if (data_143f5d3b0 == 0xffffffff)
        sub_1405947f0(&data_143f5d3a0, 2)
        int32_t rax_36 = data_143f5d3a8 + 2
        bool cond:1_1 = rax_36 s<= data_143f5d3ac
        data_143f5d3a8 = rax_36
        
        if (not(cond:1_1))
            sub_140594770(&data_143f5d3a0)
        
        sub_1405a7220(data_143f5d3a0, 2, &(*U""\tv 0")[3], 2, 0x3f)
        atexit(sub_142d10c50)
        _Init_thread_footer(&data_143f5d3b0)

if (data_143f5d3c8 s> *rbx_1)
    _Init_thread_header(&data_143f5d3c8)
    
    if (data_143f5d3c8 == 0xffffffff)
        sub_1405947f0(&data_143f5d3b8, 2)
        int32_t rax_37 = data_143f5d3c0 + 2
        bool cond:3_1 = rax_37 s<= data_143f5d3c4
        data_143f5d3c0 = rax_37
        
        if (not(cond:3_1))
            sub_140594770(&data_143f5d3b8)
        
        sub_1405a7220(data_143f5d3b8, 2, U"?&=", 2, 0x3f)
        atexit(sub_142d10c30)
        _Init_thread_footer(&data_143f5d3c8)

int16_t* result_1 = nullptr
int32_t var_90 = 0
int64_t var_78 = 0
int64_t var_70 = 0
int16_t* const result_2 = &data_142d40450
int16_t* const r8_1 = &data_142d40450
uint32_t rdx_3

if (sub_14060a620(&arg1[0xf], &data_143f5d3a0, &result_1, &var_78, 1, 0) == 0)
    if (data_143f5d3c0 != 0)
        r8_1 = data_143f5d3b8
    
    if (arg1[0x10].d != 0)
        result_2 = arg1[0xf]
    
    int64_t r8_3 = r8_1 - result_2
    uint32_t i
    
    do
        uint32_t rdx_4 = zx.d(*result_2)
        i = zx.d(*(result_2 + r8_3))
        rdx_3 = rdx_4 - i
        
        if (rdx_4 != i)
            break
        
        result_2 = &result_2[1]
    while (i != 0)
else
    if (data_143f5d3c0 != 0)
        r8_1 = data_143f5d3b8
    
    if (var_90 != 0)
        result_2 = result_1
    
    int64_t r8_2 = r8_1 - result_2
    uint32_t i_1
    
    do
        uint32_t rdx_2 = zx.d(*result_2)
        i_1 = zx.d(*(result_2 + r8_2))
        rdx_3 = rdx_2 - i_1
        
        if (rdx_2 != i_1)
            break
        
        result_2 = &result_2[1]
    while (i_1 != 0)

result_2.b = rdx_3 == 0

if (result_2.b == 0)
    void* rsi_1 = &arg1[0x21]
    *(arg1 + 0xcc) = 0
    arg2 = rsi_1
    sub_14240c790(rsi_1, 0)
    void* r15_2 = &arg1[0x1c]
    int16_t* var_68
    sub_140a35730(&arg1[0xf], &var_68)
    int32_t r14_1 = arg1[0x10].d
    int16_t* rdi_3 = var_68
    int32_t r10_1 = 0
    int32_t r12_3 = -1
label_142424db3:
    int32_t rax_24 = r14_1 - 1
    
    if (r14_1 == 0)
        rax_24 = 0
    
    if (r10_1 s>= rax_24)
        goto label_142424e3c
    
    int32_t r9_1 = *(r15_2 + 0x20)
    int32_t r8_5 = 0
    int32_t rdx_14 = 0
    int64_t rcx_23 = 0
    
    if (r9_1 s> 0)
        do
            void* rax_25 = *(*(r15_2 + 0x18) + (rcx_23 << 3))
            r8_5 += *(rax_25 + 0x20)
            
            if (*rax_25 == zx.d(*rdi_3))
                r10_1 += 1
                rdi_3 = &rdi_3[1]
                r15_2 = rax_25
                goto label_142424db3
            
            rdx_14 += 1
            rcx_23 += 1
        while (rdx_14 s< r9_1)
    
    if ((arg1[0x19].b & 1) != 0 || r8_5 s<= 0)
        int32_t rax_26 = r14_1 - 1
        
        if (r14_1 == 0)
            rax_26 = 0
        
        if (r10_1 s>= rax_26)
            goto label_142424e3c
        
        if (*(arg1[0xf] + (sx.q(r10_1) << 1)) == 0x20)
            r12_3 = r10_1
        label_142424e3c:
            
            if (r15_2 != &arg1[0x1c])
                int32_t r14_2 = *(r15_2 + 0x10)
                int32_t rdi_4 = 0
                
                if (r14_2 != 0)
                    do
                        int64_t rdx_15 = *(r15_2 + 8)
                        int64_t r8_6 = arg1[0x17]
                        int64_t r9_2 = sx.q(rdi_4)
                        int32_t rcx_26
                        
                        if (r12_3 s>= 0)
                            int32_t rax_30 = *(r8_6 + sx.q(*(rdx_15 + (r9_2 << 2))) * 0x28 + 8)
                            rcx_26 = rax_30 - 1
                            
                            if (rax_30 == 0)
                                rcx_26 = 0
                        
                        if (r12_3 s< 0 || rcx_26 == r12_3)
                            int64_t* rsi_2 = r8_6 + sx.q(*(rdx_15 + (r9_2 << 2))) * 0x28
                            int64_t rbx_9 = sx.q(arg1[0x22].d)
                            int32_t rax_32 = (rbx_9 + 1).d
                            arg1[0x22].d = rax_32
                            
                            if (rax_32 s> *(arg1 + 0x114))
                                sub_1405c4ec0(&arg1[0x21])
                            
                            int64_t* rbx_10 = arg1[0x21] + rbx_9 * 0x28
                            sub_140596d10(rbx_10, rsi_2)
                            sub_140596d10(&rbx_10[2], &rsi_2[2])
                            rbx_10[4].d = rsi_2[4].d
                        
                        rdi_4 += 1
                    while (rdi_4 u< r14_2)
                    
                    rsi_1 = arg2
                
                sub_1423f88d0(*rsi_1, *(rsi_1 + 8), arg2.b)
    
    int16_t* rax_35 = var_68
    
    if (rax_35 != 0)
        sub_140a74f90(rax_35)
else
    if (data_143f5d7e8 s> *rbx_1)
        _Init_thread_header(&data_143f5d7e8)
        
        if (data_143f5d7e8 == 0xffffffff)
            int64_t* var_88 = nullptr
            int32_t var_80_1 = 0
            void*** rax_38 = sub_1405978f0(0x20, &var_88)
            
            if (rax_38 != 0)
                *rax_38 = &data_142e85898
                rax_38[1] = sub_142403ab0
                rax_38[3] = sub_140a387b0()
                *rax_38 = &data_142e858f0
            
            data_143f5d3d0 = &data_143345b90
            data_143f5d3e8 = &data_143345b78
            data_143f5d3d8 = zx.o(0)
            data_143f5d3f0 = 0
            data_143f5d3f8 = 0
            
            if (var_80_1 != 0)
                int64_t* rcx_39 = var_88
                
                if (rcx_39 != 0)
                    (*(*rcx_39 + 0x40))(rcx_39, &data_143f5d3f0)
            
            data_143f5d400 = 0
            data_143f5d408 = 0
            __builtin_memset(&data_143f5d410, 0, 0x18)
            sub_140b2f7d0(&data_143f5d428, 0)
            data_143f5d7d8.o = data_142e151c0
            data_143f5d7d0 = 0
            sub_140745b20(&var_88)
            atexit(sub_142d10920)
            _Init_thread_footer(&data_143f5d7e8)
    
    void var_58
    
    if (sub_140b45e10(&data_143f5d428, sub_140aae420(&var_58, &var_78)) != 0)
        int64_t rsi
        rsi.b = 0
        int32_t rax_9 = data_143f5d7d8
        int32_t rcx_3 = data_143f5d7e4 + 1
        data_143f5d7e4 = rcx_3
        int64_t rbx_2 = sx.q(rax_9 - 1)
        
        if (rax_9 - 1 s>= 0)
            int64_t rdi_2 = rbx_2 << 4
            int64_t temp4_1
            
            do
                int64_t* rax_11 = data_143f5d7d0
                
                if (*(rax_11 + rdi_2 + 8) == 0)
                    rsi.b = 1
                else
                    int64_t* rcx_4 = *(rax_11 + rdi_2)
                    
                    if (rcx_4 == 0)
                        rsi.b = 1
                    else if ((*(*rcx_4 + 0x50))(rcx_4) == 0)
                        rsi.b = 1
                
                rdi_2 -= 0x10
                temp4_1 = rbx_2
                rbx_2 -= 1
            while (temp4_1 - 1 s>= 0)
            rcx_3 = data_143f5d7e4
        
        data_143f5d7e4 = rcx_3 - 1
        
        if (rsi.b != 0)
            sub_140599630(&data_143f5d7d0, 0)
    
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t r12_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (r12_1 == 1)
                (*(*var_50 + 8))(var_50, zx.q(r12_1))
    
    *(arg1 + 0xcc) = 0
    
    if (*(arg1 + 0x114) s< 0)
        sub_14240c790(&arg1[0x21], 0)
    else
        int32_t i_4 = arg1[0x22].d
        void* rbx_4 = arg1[0x21]
        
        if (i_4 != 0)
            int32_t i_2
            
            do
                int64_t rcx_8 = *(rbx_4 + 0x10)
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
                
                int64_t rcx_9 = *rbx_4
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
                
                rbx_4 += 0x28
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
        
        arg1[0x22].d = 0
    
    int64_t* i_3 = arg1[0x17]
    
    for (void* r12_2 = &i_3[sx.q(arg1[0x18].d) * 5]; i_3 != r12_2; i_3 = &i_3[5])
        char rax_18 = sub_140b3da70(&data_143f5d428)
        char rax_20
        
        if (rax_18 != 1)
            bool cond:9_1 = data_143f5d3f8 != 0
            data_143f5d410 = i_3
            int64_t* rcx_12 = nullptr
            
            if (cond:9_1)
                rcx_12 = data_143f5d3f0
            
            (*(*rcx_12 + 0x48))(rcx_12, i_3, &data_143f5d418)
            rax_20 = sub_140b48380(&data_143f5d428, &data_143f5d3e8)
            int32_t rcx_13 = data_143f5d424
            int64_t* rbx_5 = data_143f5d418
            int32_t j_2 = data_143f5d420
            data_143f5d410 = 0
            
            if (rcx_13 s< 0)
                if (j_2 != 0)
                    int32_t j
                    
                    do
                        int64_t rcx_15 = *rbx_5
                        
                        if (rcx_15 != 0)
                            sub_140a74f90(rcx_15)
                        
                        rbx_5 = &rbx_5[2]
                        j = j_2
                        j_2 -= 1
                    while (j != 1)
                    rcx_13 = data_143f5d424
                
                data_143f5d420 = 0
                
                if (rcx_13 != 0)
                    sub_14061cd70(&data_143f5d418, 0)
            else
                if (j_2 != 0)
                    int32_t j_1
                    
                    do
                        int64_t rcx_14 = *rbx_5
                        
                        if (rcx_14 != 0)
                            sub_140a74f90(rcx_14)
                        
                        rbx_5 = &rbx_5[2]
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
                
                data_143f5d420 = 0
        
        if (rax_18 == 1 || rax_20 != 0)
            int64_t rbx_6 = sx.q(arg1[0x22].d)
            int32_t rax_21 = (rbx_6 + 1).d
            arg1[0x22].d = rax_21
            
            if (rax_21 s> *(arg1 + 0x114))
                sub_1405c4ec0(&arg1[0x21])
            
            int64_t* rbx_7 = arg1[0x21] + rbx_6 * 0x28
            sub_140596d10(rbx_7, i_3)
            sub_140596d10(&rbx_7[2], &i_3[2])
            rbx_7[4].d = i_3[4].d
    
    sub_1423f88d0(arg1[0x21], arg1[0x22].d, arg2.b)

int64_t rcx_34 = var_78

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

int16_t* result = result_1

if (result == 0)
    return result

return sub_140a74f90(result)
