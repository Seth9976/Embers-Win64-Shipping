// 函数: sub_1409e5780
// 地址: 0x1409e5780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0
int32_t* r13 = arg4
int32_t result = data_143a1c6bc
char* r12 = arg3
*arg4 = result
void*** r15 = arg1
int64_t* r11 = arg1[5]
int64_t rsi = sx.q(arg2)
int64_t rdi_1 = rsi << 5
int64_t r10 = *r11

if (*(r10 + rdi_1 + 0x18) == 2)
    int32_t rax = data_143a1c6b0
    int32_t r8 = 0
    int64_t r11_1 = r11[0xe]
    int64_t i = 0
    int32_t* rbx_1 = &data_143a1c6bc
    int32_t var_88 = rax
    
    do
        int32_t* rdx
        
        if (r8 s< 0 || r8 s>= *(r10 + rdi_1 + 0x18))
            rdx = &data_143a1c6bc
        else
            rdx = *(r10 + rdi_1 + 0x10) + (sx.q(r8) << 2)
        
        int64_t rcx_1 = sx.q(*rdx) * 3
        int32_t rax_3 = *(r11_1 + (rcx_1 << 3) + 4)
        
        if (*(r11_1 + (rcx_1 << 3)) != rsi.d)
            rax_3 = *(r11_1 + (rcx_1 << 3))
        
        r8 += 1
        (&var_88)[i] = rax_3
        i += 1
    while (i s< 2)
    
    TEB* gsbase
    uint64_t r14_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
    uint64_t var_68 = r14_2
    
    if (data_143cee6d0 s> *r14_2)
        _Init_thread_header(&data_143cee6d0)
        
        if (data_143cee6d0 == 0xffffffff)
            atexit(sub_142cb81e0)
            _Init_thread_footer(&data_143cee6d0)
    
    int64_t rcx_3 = *r15[5]
    
    if (*(rdi_1 + rcx_3 + 0x18) s> 0)
        rbx_1 = *(rdi_1 + rcx_3 + 0x10)
    
    int32_t rax_7 = data_143cee6cc
    int32_t i_9 = *rbx_1
    data_143cee6c8 = 0
    
    if (rax_7 s< 0 && rax_7 != 0)
        sub_14090a730(&data_143cee6c0, 0)
    
    void* rcx_4 = r15[5]
    uint64_t var_48 = &data_143cee6c0
    int32_t i_8 = i_9
    var_48.o = var_48.o
    sub_14099a640(rcx_4 + 0x200, &var_48)
    
    if (data_143cee6e8 s> *r14_2)
        _Init_thread_header(&data_143cee6e8)
        
        if (data_143cee6e8 == 0xffffffff)
            atexit(&data_142cb89a0)
            _Init_thread_footer(&data_143cee6e8)
    
    sub_1409c46d0(r15, rsi.d, &data_143cee6d8)
    int32_t rax_9 = (data_143cee6e0).d
    uint64_t var_58 = 0
    int64_t var_50_1 = 0
    
    if (rax_9 s> 0)
        sub_1405a51b0(&var_58, rax_9)
        rax_9 = (data_143cee6e0).d
    
    int32_t* rcx_8 = data_143cee6d8
    int32_t* var_80_1 = rcx_8
    void* rax_11 = &rcx_8[sx.q(rax_9)]
    
    if (rcx_8 != rax_11)
        do
            int64_t rdi_2 = sx.q(var_50_1.d)
            int64_t rbx_2 = sx.q(*rcx_8)
            int32_t rax_12 = (rdi_2 + 1).d
            var_50_1.d = rax_12
            
            if (rax_12 s> var_50_1:4.d)
                sub_1405c4e40(&var_58)
            
            int32_t rax_13 = data_143a1c6c4
            int64_t rcx_10 = rbx_2 * 5
            uint64_t r13_1 = 0
            int64_t r12_3 = (rdi_2 << 5) + var_58
            var_48 = 0
            *r12_3 = rax_13
            *(r12_3 + 8) = 0
            *(r12_3 + 0x10) = 0
            *(r12_3 + 0x18) = data_143a1c6c8
            *(r12_3 + 0x1c) = 0
            int64_t rax_15 = r15[5][0x1c]
            uint64_t i_7 = zx.q(*(rax_15 + (rcx_10 << 3) + 8))
            int32_t rdi_3 = *(rax_15 + (rcx_10 << 3) + 0x20)
            int64_t rax_16 = *(rax_15 + (rcx_10 << 3))
            i_8 = i_7.d
            
            if (i_7.d != 0)
                sub_1405c4a90(&var_48, i_7.d, 0)
                r13_1 = var_48
                memcpy(r13_1, rax_16, i_7.d << 2)
                i_7 = zx.q(i_8)
            else
                int32_t var_3c_1 = 0
            
            int32_t rdx_8 = (i_7 - 1).d
            *r12_3 = rdi_3
            *(r12_3 + 0x1c) = 0
            
            if (rdx_8 s> *(r12_3 + 0x14))
                sub_1405a5130(r12_3 + 8, rdx_8)
            
            int32_t rax_17 = sub_1409be740(arg1, rbx_2.d, rsi.d)
            int64_t rbx_3 = 0
            
            if (i_7.d s> 0)
                uint64_t i_1
                
                do
                    if (rbx_3 != sx.q(rax_17))
                        int64_t rdi_4 = sx.q(*(r12_3 + 0x10))
                        int32_t rax_18 = (rdi_4 + 1).d
                        *(r12_3 + 0x10) = rax_18
                        
                        if (rax_18 s> *(r12_3 + 0x14))
                            sub_1405a4df0(r12_3 + 8)
                        
                        int64_t rcx_16 = rdi_4 * 3
                        int64_t rdx_11 = *(r12_3 + 8)
                        *(rdx_11 + (rcx_16 << 3)) = data_143a1c6b8
                        *(rdx_11 + (rcx_16 << 3) + 4) = data_143a1c6b4
                        *(rdx_11 + (rcx_16 << 3) + 8) = 0
                        *(rdx_11 + (rcx_16 << 3) + 0x10) = 0
                        *(rdx_11 + (rcx_16 << 3)) = *(r13_1 + (rbx_3 << 2))
                    
                    rbx_3 += 1
                    i_1 = i_7
                    i_7 -= 1
                while (i_1 != 1)
            
            if (r13_1 != 0)
                sub_140a74f90(r13_1)
            
            r15 = arg1
            rcx_8 = &var_80_1[1]
            var_80_1 = rcx_8
        while (rcx_8 != rax_11)
        
        r14_2 = var_68
        r12 = arg3
        r13 = arg4
    
    if (data_143cee700 s> *r14_2)
        _Init_thread_header(&data_143cee700)
        
        if (data_143cee700 == 0xffffffff)
            atexit(sub_142cb8570)
            _Init_thread_footer(&data_143cee700)
    
    int32_t i_5 = data_143cee6f8
    int32_t rbx_8
    
    if (data_143cee6fc s< 0)
        if (i_5 != 0)
            int64_t* rbx_7 = data_143cee6f0 + 8
            int32_t i_2
            
            do
                int64_t rcx_20 = *rbx_7
                
                if (rcx_20 != 0)
                    sub_140a74f90(rcx_20)
                
                rbx_7 = &rbx_7[4]
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
        
        bool cond:3_1 = data_143cee6fc == 0
        rbx_8 = 0
        data_143cee6f8 = 0
        
        if (not(cond:3_1))
            sub_1405a51b0(&data_143cee6f0, 0)
            rbx_8 = data_143cee6f8
    else
        if (i_5 != 0)
            int64_t* rbx_5 = data_143cee6f0 + 8
            int32_t i_3
            
            do
                int64_t rcx_19 = *rbx_5
                
                if (rcx_19 != 0)
                    sub_140a74f90(rcx_19)
                
                rbx_5 = &rbx_5[4]
                i_3 = i_5
                i_5 -= 1
            while (i_3 != 1)
        
        rbx_8 = 0
    
    bool cond:4_1 = rbx_8 + 1 s<= data_143cee6fc
    data_143cee6f8 = rbx_8 + 1
    
    if (not(cond:4_1))
        sub_1405c4e40(&data_143cee6f0)
    
    int64_t rcx_22 = sx.q(rbx_8) << 5
    int32_t* rcx_23 = rcx_22 + data_143cee6f0
    
    if (rcx_22 == neg.q(data_143cee6f0))
        rcx_23 = nullptr
    else
        *rcx_23 = data_143a1c6b4
        rcx_23[1] = data_143a1c6b4
        *(rcx_23 + 8) = 0
        *(rcx_23 + 0x10) = 0
        rcx_23[6] = data_143a1c6bc
    
    *rcx_23 = var_88
    rcx_23[1] = rax
    
    if (rcx_23 != &data_143cee6b8)
        int64_t rdi_5 = sx.q(data_143cee6c8)
        int64_t rsi_1 = data_143cee6c0
        int32_t r8_4 = rcx_23[5]
        rcx_23[4] = rdi_5.d
        
        if (rdi_5.d != 0 || r8_4 != 0)
            sub_1409da0d0(&rcx_23[2], rdi_5.d, r8_4)
            memcpy(*(rcx_23 + 8), rsi_1, (rdi_5 * 0x60).d)
        else
            rcx_23[5] = 0
    
    var_48 = 0
    i_8.q = 0
    sub_1409b37f0(r15, &data_143cee6f0, &var_48)
    uint64_t rcx_27 = var_48
    *r13 = *rcx_27
    sub_140a74f90(rcx_27)
    sub_1409b6930(r15, &data_143cee6d8, 1, 1, 1, 0)
    var_68 = 0
    int64_t var_60_1 = 0
    var_48 = 0
    i_8.q = 0
    sub_1409b4ab0(r15, &var_58, &var_68, &var_48)
    uint64_t rcx_30 = var_48
    
    if (rcx_30 != 0)
        sub_140a74f90(rcx_30)
    
    uint64_t rcx_31 = var_68
    
    if (rcx_31 != 0)
        sub_140a74f90(rcx_31)
    
    sub_140992690(&r15[0x7b], &data_143cee6d8)
    result = sub_140992690(&r15[0x8f], &data_143cee6d8)
    int32_t i_6 = var_50_1.d
    uint64_t rsi_2 = var_58
    *r12 = 1
    
    if (i_6 != 0)
        int64_t* rbx_10 = rsi_2 + 8
        int32_t i_4
        
        do
            result = sub_1408464b0(rbx_10)
            rbx_10 = &rbx_10[4]
            i_4 = i_6
            i_6 -= 1
        while (i_4 != 1)
    
    if (rsi_2 != 0)
        return sub_140a74f90(rsi_2)

return result
