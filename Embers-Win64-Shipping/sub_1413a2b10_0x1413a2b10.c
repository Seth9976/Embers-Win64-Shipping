// 函数: sub_1413a2b10
// 地址: 0x1413a2b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t* i_2 = __security_cookie ^ &var_c8
int64_t* i_3 = i_2
int64_t* rbx = *arg2

if (rbx != 0)
    i_2 = (*(*rbx + 0x38))(rbx, zx.q(arg2[1].d))

if (*(rbx + 9) == 0)
    int64_t rax_2 = *rbx
    *(rbx + 9) = 1
    int64_t* i_6 = (*(rax_2 + 0x40))(rbx, 0)
    int32_t r14_1 = 1
    int64_t* i_4 = i_6
    int32_t rbp_1 = 1
    
    if (i_6 != 0)
        int64_t* i
        
        do
            int64_t* rcx_2 = *i_4
            
            if (rcx_2 != 0)
                (*(*rcx_2 + 0x38))(rcx_2, zx.q(i_4[1].d))
                
                if (sub_1405949a0() != 0)
                    int64_t rax_5 = *rbx
                    int64_t var_a8 = 0
                    int64_t var_a0_1 = 0
                    int32_t rdi_1 = 0
                    
                    for (void* j = (*(rax_5 + 0x38))(rbx, 0); j != 0; 
                            j = (*(*rbx + 0x38))(rbx, zx.q(rdi_1)))
                        int64_t rdx_2 = *(j + 0x40)
                        int64_t r8 = -1
                        
                        do
                            r8 += 1
                        while (*(rdx_2 + (r8 << 1)) != 0)
                        
                        sub_140a20ba0(&var_a8, rdx_2, r8.d)
                        rdi_1 += 1
                    
                    if (var_a0_1.d s<= 1 && var_a8 != u"UnknownName")
                        int32_t rcx_7 = var_a0_1:4.d
                        int32_t rdx_4 = 0
                        var_a0_1.d = 0
                        
                        if (rcx_7 != 0xc)
                            sub_1405947f0(&var_a8, 0xc)
                            rcx_7 = var_a0_1:4.d
                            rdx_4 = var_a0_1.d
                        
                        var_a0_1.d = rdx_4 + 0xc
                        
                        if (rdx_4 + 0xc s> rcx_7)
                            sub_140594770(&var_a8)
                        
                        __builtin_memcpy(var_a8, u"UnknownName", 0x18)
                    
                    int64_t rcx_11 = var_a8
                    
                    if (rcx_11 != 0)
                        sub_140a74f90(rcx_11)
                
                *(arg3 + 0x28) = rbx
                sub_1413a2b10(arg1, i_4, arg3)
            
            i = (*(*rbx + 0x40))(rbx, zx.q(rbp_1))
            rbp_1 += 1
            i_4 = i
        while (i != 0)
        
        r14_1 = (i + 1).d
    
    int32_t rsi_1 = 0
    int32_t rbp_2 = 0
    int128_t* i_7 = (*(*rbx + 0x38))(rbx, 0)
    int128_t* i_5 = i_7
    
    if (i_7 != 0)
        TEB* gsbase
        int32_t* r15_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
        int128_t* i_1
        
        do
            void var_98
            int128_t* rax_13 = (*(*rbx + 0x80))(rbx, &var_98, zx.q(rbp_2))
            *i_5 = *rax_13
            i_5[1].d = rax_13[1].d
            *(i_5 + 0x14) = *(rax_13 + 0x14)
            *(i_5 + 0x18) = *(rax_13 + 0x18)
            *(i_5 + 0x1c) = *(rax_13 + 0x1c)
            i_5[2].d = rax_13[2].d
            *(i_5 + 0x24) = *(rax_13 + 0x24)
            *(i_5 + 0x25) = *(rax_13 + 0x25)
            *(i_5 + 0x26) = *(rax_13 + 0x26)
            *(i_5 + 0x28) = *(rax_13 + 0x28)
            *(i_5 + 0x2c) = *(rax_13 + 0x2c)
            i_5[3].d = rax_13[3].d
            *(i_5 + 0x34) = *(rax_13 + 0x34)
            *(i_5 + 0x38) = *(rax_13 + 0x38)
            *(i_5 + 0x39) = *(rax_13 + 0x39)
            i_5[4].q = rax_13[4].q
            *(i_5 + 0x48) = *(rax_13 + 0x48)
            *(i_5 + 0x49) = *(rax_13 + 0x49)
            *(i_5 + 0x4a) = *(rax_13 + 0x4a)
            
            if (data_143ec6e18 s> *r15_2)
                _Init_thread_header(&data_143ec6e18)
                
                if (data_143ec6e18 == 0xffffffff)
                    int64_t* rcx_32 = data_143db18d0
                    
                    if (rcx_32 == 0)
                        sub_140a53c40()
                        rcx_32 = data_143db18d0
                    
                    int64_t r8_4
                    r8_4.b = 1
                    int64_t* rax_39 =
                        (*(*rcx_32 + 0xb0))(rcx_32, r.PostProcessingColorFormat", r8_4)
                    int64_t rax_37
                    
                    if (rax_39 == 0)
                        rax_37 = 0
                    else
                        int64_t rdx_16 = *rax_39
                        rax_37 = (*(rdx_16 + 0x58))(rax_39, rdx_16)
                    
                    data_143ec6e10 = rax_37
                    _Init_thread_footer(&data_143ec6e18)
            
            if (*(data_143ec6e10 + 4) == 1)
                int32_t rcx_21 = *(i_5 + 0x2c)
                
                if (((rcx_21 - 9) & 0xffffffee) == 0 && rcx_21 != 0x19)
                    *(i_5 + 0x2c) = r14_1
            
            rsi_1 += 1
            rbp_2 = rsi_1
            i_1 = (*(*rbx + 0x38))(rbx, zx.q(rsi_1))
            i_5 = i_1
        while (i_1 != 0)
    
    *(arg3 + 0x28) = rbx
    *(arg3 + 0x48) = 0
    *(arg3 + 0x50) = 0
    (*(*rbx + 0x28))(rbx, arg3)
    i_2 = (*(*rbx + 0x40))(rbx, 0)
    
    while (i_2 != 0)
        int64_t* rcx_25 = *i_2
        
        if (rcx_25 != 0)
            int64_t r8_3 = *rcx_25
            void* rax_34 = (*(r8_3 + 0x38))(rcx_25, zx.q(i_2[1].d), r8_3)
            
            if (rax_34 != 0)
                int32_t rcx_26 = *(rax_34 + 0x58)
                
                if (rcx_26 != 0)
                    *(rax_34 + 0x58) = rcx_26 - 1
                    
                    if (rcx_26 == 1)
                        int64_t* rcx_28 = *(rax_34 + 0x50)
                        *(rax_34 + 0x50) = 0
                        
                        if (rcx_28 != 0)
                            (*(*rcx_28 + 0x38))(rcx_28)
        
        i_2 = (*(*rbx + 0x40))(rbx, zx.q(r14_1))
        r14_1 += 1

__security_check_cookie(i_3 ^ &var_c8)
return i_2
