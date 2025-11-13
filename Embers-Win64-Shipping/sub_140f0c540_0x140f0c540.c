// 函数: sub_140f0c540
// 地址: 0x140f0c540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_508
int64_t rax_1 = __security_cookie ^ &var_508
int32_t r13 = 0
int32_t var_4a4 = 0
int64_t* rbx = *(arg4 + 0x48)

if (rbx != 0)
    rbx[1].d += 1

int64_t r14
r14.b = *(arg4 + 0x38) == data_143e1e008

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

void* const var_4a0
char var_468
int64_t var_460

if (r14.b == 0)
    int64_t* rbx_2 = *(arg4 + 0x48)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    if (*(arg4 + 0x38) != data_143e1e020 || *(arg1 + 0x4d8) == 0)
        r14.b = 0
    else
        int64_t* rcx_15 = *(arg1 + 0x4d0)
        
        if (rcx_15 == 0)
            r14.b = 0
        else if ((*(*rcx_15 + 0x28))(rcx_15) == 0)
            r14.b = 0
        else
            r14.b = 1
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp3_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (r14.b == 0)
        *arg2 = 0
        *(arg2 + 8) = 0
        *(arg2 + 0x10) = 0
        arg2[0x20] = 0
        __builtin_memset(&arg2[0x28], 0, 0x88)
        *(arg2 + 0xb4) &= 0xffffff00
        *(arg2 + 0xb0) = 0x20702
    else
        char* r15_1 = *(arg4 + 0x10)
        int64_t* var_320
        uint64_t var_318
        char* rbx_5
        char r12_2
        char r14_1
        
        if (r15_1 == 0)
            r14_1 = 4
            void var_1a8
            rbx_5 = sub_140d947e0(&var_1a8)
            r13 = 4
            r12_2 = 0
        else
            void* rbx_3 = &r15_1[8]
            var_468 = *r15_1
            void* var_340_1 = nullptr
            int32_t i_2 = *(rbx_3 + 0x128)
            void* r12_1 = *(rbx_3 + 0x120)
            int32_t i_4 = i_2
            
            if (i_2 != 0)
                sub_140dbc410(&var_460, i_2, 0)
                void* rcx_19 = &var_460
                
                if (r12_1 != 0)
                    rbx_3 = r12_1
                
                if (var_340_1 != 0)
                    rcx_19 = var_340_1
                
                int32_t i
                
                do
                    *rcx_19 = *rbx_3
                    *(rcx_19 + 0x10) = *(rbx_3 + 0x10)
                    arg5 = *(rbx_3 + 0x20)
                    *(rcx_19 + 0x20) = arg5
                    *(rcx_19 + 0x30) = *(rbx_3 + 0x30)
                    *(rcx_19 + 0x38) = *(rbx_3 + 0x38)
                    void* rax_21 = *(rbx_3 + 0x40)
                    *(rcx_19 + 0x40) = rax_21
                    
                    if (rax_21 != 0)
                        *(rax_21 + 8) += 1
                    
                    rcx_19 += 0x48
                    rbx_3 += 0x48
                    i = i_2
                    i_2 -= 1
                while (i != 1)
            else
                int32_t var_334_1 = 4
            
            char var_330_1 = r15_1[0x138]
            int64_t var_328_1 = *(r15_1 + 0x140)
            int64_t* rax_24 = *(r15_1 + 0x148)
            var_320 = rax_24
            
            if (rax_24 != 0)
                rax_24[1].d += 1
            
            var_318 = 0
            int32_t i_3 = *(r15_1 + 0x158)
            int64_t* rbx_4 = *(r15_1 + 0x150)
            int32_t i_5 = i_3
            
            if (i_3 != 0)
                arg5 = sub_1405a4be0(&var_318, i_3, 0)
                uint64_t rcx_21 = var_318
                int32_t i_1
                
                do
                    *rcx_21 = *rbx_4
                    void* rax_26 = rbx_4[1]
                    *(rcx_21 + 8) = rax_26
                    
                    if (rax_26 != 0)
                        *(rax_26 + 8) += 1
                    
                    rcx_21 += 0x10
                    rbx_4 = &rbx_4[2]
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
                r14_1 = 2
                rbx_5 = &var_468
                r12_2 = 2
            else
                r14_1 = 2
                int32_t var_30c_1 = 0
                r12_2 = 2
                rbx_5 = &var_468
        
        char var_308 = *rbx_5
        int64_t rcx_24 = 0
        int64_t var_1e0_1 = 0
        void var_300
        
        if (*(rbx_5 + 0x128) == 0)
            arg5 = memmove(&var_300, &rbx_5[8], 0x120)
            rcx_24 = var_1e0_1
        
        if (rcx_24 != 0)
            arg5 = sub_140a74f90(rcx_24)
        
        int64_t var_1e0_2 = *(rbx_5 + 0x128)
        *(rbx_5 + 0x128) = 0
        int32_t var_1d8_1 = *(rbx_5 + 0x130)
        int32_t var_1d4_1 = *(rbx_5 + 0x134)
        *(rbx_5 + 0x130) = 0
        *(rbx_5 + 0x134) = 4
        char var_1d0_1 = rbx_5[0x138]
        int64_t var_1c8_1 = *(rbx_5 + 0x140)
        int64_t* rax_33 = *(rbx_5 + 0x148)
        __builtin_memset(&rbx_5[0x140], 0, 0x20)
        int64_t var_1b8 = 0
        var_1b8 = *(rbx_5 + 0x150)
        int32_t var_1b0_1 = *(rbx_5 + 0x158)
        int32_t var_1ac_1 = *(rbx_5 + 0x15c)
        
        if (r13 != 0)
            r14_1 = r12_2
            void var_58
            sub_140596d80(&var_58)
            int64_t* var_60
            
            if (var_60 != 0)
                var_60[1].d -= 1
                
                if (var_60[1].d == 1)
                    (**var_60)(var_60)
                    int32_t temp10_1 = *(var_60 + 0xc)
                    *(var_60 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*var_60 + 8))(var_60, 1)
            
            void var_1a0
            arg5 = sub_140d94d20(&var_1a0)
        
        if ((r14_1 & 2) != 0)
            sub_140596d80(&var_318)
            
            if (var_320 != 0)
                var_320[1].d -= 1
                
                if (var_320[1].d == 1)
                    (**var_320)(var_320)
                    int32_t temp12_1 = *(var_320 + 0xc)
                    *(var_320 + 0xc) -= 1
                    
                    if (temp12_1 == 1)
                        (*(*var_320 + 8))(var_320, 1)
            
            arg5 = sub_140d94d20(&var_460)
        
        char var_4a7_1 = 0
        var_4a4 = 5
        int64_t* rcx_34
        
        if (*(arg1 + 0x4d8) == 0)
            rcx_34 = nullptr
        else
            rcx_34 = *(arg1 + 0x4d0)
        
        void var_488
        (*(*rcx_34 + 0x48))(rcx_34, &var_488)
        int64_t* rcx_35 = *(arg1 + 0x10)
        void* const rdx_9 = nullptr
        
        if (rcx_35 != 0)
            int32_t rax_42 = rcx_35[1].d
            
            if (rax_42 != 0)
                rcx_35[1].d = rax_42 + 1
                rax_42.b = 1
            
            if (rax_42.b == 0)
                rcx_35 = nullptr
            
            if (rcx_35 != 0)
                rdx_9 = *(arg1 + 8)
        
        char var_4b8_1 = 1
        var_4a0 = rdx_9
        void var_4a8
        void* var_478
        sub_140e80850(data_143e29f28, &var_478, &var_4a0, &var_308, arg5, &var_488, arg4 + 0x18, 
            &var_4a4, 1, &data_143dbb1f0, &var_4a8, var_4b8_1)
        int64_t* var_470
        
        if (var_470 != 0)
            var_470[1].d -= 1
            
            if (var_470[1].d == 1)
                (**var_470)(var_470)
                int32_t temp15_1 = *(var_470 + 0xc)
                *(var_470 + 0xc) -= 1
                
                if (temp15_1 == 1)
                    (*(*var_470 + 8))(var_470, 1)
        
        if (rcx_35 != 0)
            rcx_35[1].d -= 1
            
            if (rcx_35[1].d == 1)
                (**rcx_35)(rcx_35)
                int32_t temp17_1 = *(rcx_35 + 0xc)
                *(rcx_35 + 0xc) -= 1
                
                if (temp17_1 == 1)
                    (*(*rcx_35 + 8))(rcx_35, 1)
        
        int64_t* var_480
        
        if (var_480 != 0)
            var_480[1].d -= 1
            
            if (var_480[1].d == 1)
                (**var_480)(var_480)
                int32_t temp19_1 = *(var_480 + 0xc)
                *(var_480 + 0xc) -= 1
                
                if (temp19_1 == 1)
                    (*(*var_480 + 8))(var_480, 1)
        
        *arg2 = 1
        *(arg2 + 8) = 0
        *(arg2 + 0x10) = 0
        arg2[0x20] = 0
        __builtin_memset(&arg2[0x28], 0, 0x88)
        *(arg2 + 0xb4) &= 0xffffff00
        *(arg2 + 0xb0) = 0x20702
        sub_140596d80(&var_1b8)
        
        if (rax_33 != 0)
            rax_33[1].d -= 1
            
            if (rax_33[1].d == 1)
                (**rax_33)(rax_33)
                int32_t temp20_1 = *(rax_33 + 0xc)
                *(rax_33 + 0xc) -= 1
                
                if (temp20_1 == 1)
                    (*(*rax_33 + 8))(rax_33, 1)
        
        sub_140d94d20(&var_300)
else
    bool cond:0_1 = *(arg1 + 0x4c8) != 1
    *(arg1 + 0x398) = 1
    int32_t var_3b4
    
    if (cond:0_1)
        int64_t* rcx_10 = *(arg1 + 0x10)
        void* rdx_4 = nullptr
        int64_t* rbx_1 = rcx_10
        
        if (rcx_10 != 0)
            int32_t rax_8 = rcx_10[1].d
            
            if (rax_8 != 0)
                rcx_10[1].d = rax_8 + 1
                rax_8.b = 1
                rbx_1 = *(arg1 + 0x10)
            
            if (rax_8.b == 0)
                rcx_10 = nullptr
            
            if (rcx_10 != 0)
                rdx_4 = *(arg1 + 8)
        
        int64_t* var_498_2 = rcx_10
        int64_t rcx_11 = 0
        var_4a0 = rdx_4
        
        if (rbx_1 != 0)
            int32_t rax_9 = rbx_1[1].d
            
            if (rax_9 != 0)
                rbx_1[1].d = rax_9 + 1
                rax_9.b = 1
            
            if (rax_9.b == 0)
                rbx_1 = nullptr
            
            if (rbx_1 != 0)
                rcx_11 = *(arg1 + 8)
        
        int32_t var_3b4_2 = var_3b4 & 0xffffff00
        var_468 = 1
        var_460 = 0
        int64_t var_458_2 = 0
        char var_448_2 = 0
        int64_t var_440_2 = 0
        int64_t var_438_1 = 0
        int64_t* var_428_1 = (zx.o(0)).q
        int128_t var_418
        __builtin_memset(&var_418, 0, 0x60)
        int32_t var_3b8_2 = 0x20702
        int64_t var_430_1 = rcx_11
        
        if (rbx_1 != 0)
            *(rbx_1 + 0xc) += 1
            
            if (var_428_1 != 0)
                int32_t temp5_1 = *(var_428_1 + 0xc)
                *(var_428_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_428_1 + 8))(var_428_1, 1)
            
            var_428_1 = rbx_1
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp6_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    else
        sub_140f19af0(arg1)
        char rcx_4 = *sub_140eff7d0(arg1 + 0x3a0)
        
        if (rcx_4 == 1)
            sub_140e78f50(data_143e29f28, arg1 + 0x4f8, 0)
        else if (rcx_4 == 0)
            sub_140e78f50(data_143e29f28, arg1 + 0x510, 0)
        
        void* const rcx_6 = *(arg1 + 0x10)
        void* rdx_1 = nullptr
        
        if (rcx_6 != 0)
            int32_t rax_6 = *(rcx_6 + 8)
            
            if (rax_6 != 0)
                *(rcx_6 + 8) = rax_6 + 1
                rax_6.b = 1
            
            if (rax_6.b == 0)
                rcx_6 = nullptr
            
            if (rcx_6 != 0)
                rdx_1 = *(arg1 + 8)
        
        int32_t var_3b4_1 = var_3b4 & 0xffffff00
        var_4a0 = rdx_1
        void* const var_498_1 = rcx_6
        var_468 = 1
        var_460 = 0
        int64_t var_458_1 = 0
        char var_448_1 = 0
        int64_t var_440_1
        __builtin_memset(&var_440_1, 0, 0x88)
        int32_t var_3b8_1 = 0x20702
    sub_140596b00(arg2, sub_140dbdce0(&var_468, &var_4a0, 0, 0))
    sub_140597700(&var_468)
__security_check_cookie(rax_1 ^ &var_508)
return arg2
