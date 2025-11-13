// 函数: sub_141059b40
// 地址: 0x141059b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
int64_t var_10 = rsi
int64_t r15 = *arg1
int64_t* var_c8

if (data_1439b4af4 != 0)
    if (arg2 == 0)
        while (*arg1[0xd] != 0)
            int64_t* rbx_2 = *(*arg1[0xd] + 8)
            bool z_2
            
            if (0 == rbx_2[6].d)
                rbx_2[6].d = 0
                z_2 = true
            else
                rbx_2[6].d
                z_2 = false
            
            if (not(z_2))
                break
            
            if (rbx_2[8] != 0)
                int64_t* rcx_11 = rbx_2[7]
                (*(*rcx_11 + 0x20))(rcx_11, 0xffffffff, 0)
                rbx_2[8] = 0
            
            void* rdx_3 = *arg1[0xd]
            
            if (rdx_3 != 0)
                rbx_2 = *(rdx_3 + 8)
                int64_t rcx_12 = arg1[0xd]
                arg1[0xd] = rdx_3
                *(rdx_3 + 8) = 0
                j_sub_140a74f90(rcx_12)
            
            if (rbx_2 != 0)
                (*(*rbx_2 + 0x10))(rbx_2, 1)
        
        void*** rax_16 = j_sub_140a82f30(0x50)
        void*** rbx_3 = rax_16
        
        if (rax_16 == 0)
            rbx_3 = nullptr
        else
            *rbx_3 = &data_142f01790
            rbx_3[2] = r15
            int64_t* rax_17 = j_sub_140a82f30(0x28)
            
            if (rax_17 == 0)
                rax_17 = nullptr
            else
                *rax_17 = 0
            
            rbx_3[5] = rax_17
            rbx_3[4] = rax_17
            EnterCriticalSection(&arg1[2])
            int32_t r15_1 = 0
            
            while (*arg1[9] != 0)
                void* rcx_16 = *arg1[9]
                int128_t var_a8_1 = *(rcx_16 + 8)
                var_c8.o = *(rcx_16 + 0x18)
                
                if (r15_1 u> 0x1000)
                    break
                
                if (sub_1410271d0(_mm_bsrli_si128(*(rcx_16 + 8), 8).q, *(rcx_16 + 0x18)) == 0)
                    break
                
                void* rdx_6 = *arg1[9]
                
                if (rdx_6 != 0)
                    int128_t zmm0_1 = *(rdx_6 + 8)
                    int64_t rcx_18 = arg1[9]
                    int64_t var_98
                    __builtin_memset(&var_98, 0, 0x20)
                    var_a8_1 = zmm0_1
                    zmm0_1 = *(rdx_6 + 0x18)
                    arg1[9] = rdx_6
                    var_c8.o = zmm0_1
                    *(rdx_6 + 8) = var_98.o
                    int64_t var_88
                    *(rdx_6 + 0x18) = var_88.o
                    j_sub_140a74f90(rcx_18)
                
                arg1[0xa].d -= 1
                int64_t* rax_22 = j_sub_140a82f30(0x28)
                
                if (rax_22 != 0)
                    *rax_22 = 0
                    *(rax_22 + 8) = var_a8_1
                    *(rax_22 + 0x18) = var_c8.o
                    void** rcx_19 = rbx_3[4]
                    rbx_3[4] = rax_22
                    *rcx_19 = rax_22
                
                r15_1 += 1
            
            if (arg1 != -0x10)
                LeaveCriticalSection(&arg1[2])
            
            rbx_3[6].d = 0
            rbx_3[7] = 0
            rbx_3[8] = 0
        
        int64_t rax_23 = data_143db7ac8
        rbx_3[6].d += 1
        void*** rcx_21 = rbx_3[7]
        rbx_3[8] = rax_23
        
        if (rax_23 == 0)
            sub_140a4fc50(rcx_21)
            rbx_3[7] = 0
            sub_14104a150(rbx_3)
        else
            if (rcx_21 == 0)
                rcx_21.b = 1
                void*** rax_24 = sub_140a491d0(rcx_21.b)
                rcx_21 = rax_24
                rbx_3[7] = rax_24
            
            (*rcx_21)[3](rcx_21)
            int64_t* rcx_22 = rbx_3[8]
            (*(*rcx_22 + 0x10))(rcx_22, rbx_3)
        
        uint64_t result = j_sub_140a82f30(0x10)
        
        if (result != 0)
            *result = 0
            *(result + 8) = rbx_3
            uint64_t* rcx_24 = arg1[0xc]
            arg1[0xc] = result
            *rcx_24 = result
        
        result.b = 0
        return result
    
    while (*arg1[0xd] != 0)
        int64_t* rbx_1 = *(*arg1[0xd] + 8)
        void* rdx = *arg1[0xd]
        
        if (rdx != 0)
            rbx_1 = *(rdx + 8)
            int64_t rcx_2 = arg1[0xd]
            arg1[0xd] = rdx
            *(rdx + 8) = 0
            j_sub_140a74f90(rcx_2)
        
        int64_t* rcx_3 = rbx_1[8]
        
        if (rcx_3 == 0)
            bool z_1
            
            if (0 == rbx_1[6].d)
                rbx_1[6].d = 0
                z_1 = true
            else
                rbx_1[6].d
                z_1 = false
            
            if (not(z_1))
                sub_14104a150(rbx_1)
            
            goto label_141059c04
        
        if ((*(*rcx_3 + 0x18))(rcx_3, rbx_1) == 0)
        label_141059c04:
            
            if (rbx_1[8] != 0)
                int64_t* rcx_7 = rbx_1[7]
                (*(*rcx_7 + 0x20))(rcx_7, 0xffffffff, 0)
                rbx_1[8] = 0
        else
            sub_14104a150(rbx_1)
            int64_t* rcx_5 = rbx_1[7]
            
            if (rcx_5 != 0)
                (*(*rcx_5 + 0x10))(rcx_5)
            
            rbx_1[8] = 0
        
        (*(*rbx_1 + 0x10))(rbx_1, 1)

int64_t* rdi
uint128_t zmm0
uint128_t zmm1

if (arg3 == 0)
    while (true)
        EnterCriticalSection(&arg1[2])
        
        if (*arg1[9] == 0)
            break
        
        void* rcx_34 = *arg1[9]
        zmm0 = *(rcx_34 + 8)
        var_c8.o = zmm0
        int96_t var_b8_1 = (*(rcx_34 + 0x18)).12
        
        if (sub_1410271d0(_mm_bsrli_si128(zmm0, 8).q, *(rcx_34 + 0x18)) == 0)
            break
        
        void* rdx_13 = *arg1[9]
        
        if (rdx_13 != 0)
            zmm0 = *(rdx_13 + 8)
            int64_t rcx_36 = arg1[9]
            zmm1 = *(rdx_13 + 0x18)
            arg1[9] = rdx_13
            var_c8.o = zmm0
            int64_t var_58
            __builtin_memset(&var_58, 0, 0x20)
            var_b8_1 = zmm1.12
            *(rdx_13 + 8) = var_58.o
            int64_t var_48
            *(rdx_13 + 0x18) = var_48.o
            j_sub_140a74f90(rcx_36)
        
        arg1[0xa].d -= 1
        LeaveCriticalSection(&arg1[2])
        
        if (var_b8_1:8.d != 0)
            (*(*var_c8 + 0x10))(var_c8)
        else
            var_c8[1].d -= 1
            
            if (var_c8[1].d == 1 && var_c8 != 0)
                (**var_c8)(var_c8, 1)
    
    if (arg1 != -0x10)
        LeaveCriticalSection(&arg1[2])
else
    rdi = var_c8
    
    while (true)
        EnterCriticalSection(&arg1[2])
        arg1[0xa].d -= 1
        void* rdx_9 = *arg1[9]
        int96_t var_b8
        
        if (rdx_9 != 0)
            zmm0 = *(rdx_9 + 8)
            int64_t rcx_26 = arg1[9]
            zmm1 = *(rdx_9 + 0x18)
            arg1[9] = rdx_9
            var_c8.o = zmm0
            int64_t var_78
            __builtin_memset(&var_78, 0, 0x20)
            var_b8 = zmm1.12
            *(rdx_9 + 8) = var_78.o
            int64_t var_68
            *(rdx_9 + 0x18) = var_68.o
            j_sub_140a74f90(rcx_26)
            rdi = var_c8
            rsi.b = 1
        else
            rsi.b = 0
        
        LeaveCriticalSection(&arg1[2])
        
        if (rsi.b == 0)
            break
        
        if (var_b8:8.d != 0)
            (*(*rdi + 0x10))(rdi)
        else
            int64_t arg_20 = rdi[0x23]
            int64_t var_38
            sub_140b63b70(&arg_20, &var_38)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi, 1)
            
            int64_t rcx_30 = var_38
            
            if (rcx_30 != 0)
                sub_140a74f90(rcx_30)
EnterCriticalSection(&arg1[2])
rdi.b = *arg1[9] == 0
LeaveCriticalSection(&arg1[2])
return zx.q(rdi.b)
