// 函数: sub_140ac1340
// 地址: 0x140ac1340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[8]
int64_t* var_80 = r8
int64_t* var_88

if (r8 == 0)
label_140ac145d:
    
    if (var_80 == 0)
        goto label_140ac13b0
    
    int64_t* rcx_8 = arg1[7]
    var_88 = rcx_8
    
    if (rcx_8 == 0)
        goto label_140ac13b0
    
    if (sub_140a81000(rcx_8) == 0)
        goto label_140ac13bc
    
label_140ac1649:
    
    if (var_88 == 0)
        int64_t var_90 = arg1[3]
        sub_140aae6a0()
        EnterCriticalSection(&data_143db9da8)
        int32_t arg_8
        sub_140a73990(&data_143db9d58, &arg_8, var_90)
        int64_t rax_32 = sx.q(arg_8)
        void* const rax_35
        
        if (rax_32.d == 0xffffffff)
            rax_35 = nullptr
        else
            rax_35 = rax_32 * 0x60 + data_143db9d58
        
        int64_t* rcx_27 = rax_35 + 8
        
        if (rax_35 == 0)
            rcx_27 = nullptr
        
        int32_t* rax_36
        void arg_20
        
        if (rcx_27 != 0)
            rax_36 = sub_140aab190(rcx_27, &arg_20, &arg1[4])
        
        if (rcx_27 == 0 || *rax_36 == 0xffffffff)
            int64_t rax_37 = var_90
            arg_8.q = rax_37
            void var_98
            sub_140a918c0(sub_140a92ac0(&data_143db9d58, sub_140b5ead0(rax_37.d) + arg3, &var_90), 
                &var_98, &arg1[4], nullptr)
        
        LeaveCriticalSection(&data_143db9da8)
    
    *arg2 = var_88
    arg2[1] = var_80
else
    int32_t rax_1 = 0
    bool z_1
    
    if (0 == r8[1].d)
        r8[1].d = 0
        z_1 = true
    else
        rax_1 = r8[1].d
        z_1 = false
    
    if (not(z_1))
        while (true)
            bool z_2
            
            if (rax_1 == r8[1].d)
                r8[1].d = rax_1 + 1
                z_2 = true
            else
                r8[1].d
                z_2 = false
            
            if (z_2)
                break
            
            rax_1 = 0
            bool z_3
            
            if (0 == r8[1].d)
                r8[1].d = 0
                z_3 = true
            else
                rax_1 = r8[1].d
                z_3 = false
            
            if (z_3)
                goto label_140ac13a9
        
        goto label_140ac145d
    
label_140ac13a9:
    var_80 = nullptr
label_140ac13b0:
    sub_140aa4650(arg1)
label_140ac13bc:
    EnterCriticalSection(&arg1[9])
    void var_48
    
    if (&arg1[7] != &var_48)
        arg1[7] = 0
        int64_t* rcx_3 = arg1[8]
        arg1[8] = 0
        
        if (rcx_3 != 0)
            int32_t rax_3 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (rax_3 == 1)
                (*(*rcx_3 + 8))(rcx_3, 1)
    
    int64_t* var_60 = nullptr
    var_88 = nullptr
    int64_t var_68_1 = 0
    sub_1405aeff0(&var_80, &var_60)
    int64_t* rcx_5 = var_60
    
    if (rcx_5 != 0)
        rcx_5[1].d -= 1
        
        if (rcx_5[1].d == 1)
            int64_t* rdi_1 = var_60
            (**rdi_1)(rdi_1)
            int32_t rax_7 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rax_7 == 1)
                int64_t* rcx_7 = var_60
                (*(*rcx_7 + 8))(rcx_7, 1)
    
    if (arg1[6].b == 2)
        sub_140aae6a0()
        void* var_78
        sub_140aac030(&data_143db9ce0, &var_78, arg1[3])
        void* rdi_2 = var_78
        int64_t* var_70
        
        if (rdi_2 == 0)
        label_140ac15bf:
            arg1[7] = var_88
            int64_t* rcx_22 = arg1[8]
            int64_t* rax_24 = var_80
            
            if (rax_24 != rcx_22)
                if (rax_24 != 0)
                    *(rax_24 + 0xc) += 1
                    rcx_22 = arg1[8]
                
                if (rcx_22 != 0)
                    int32_t rax_25 = *(rcx_22 + 0xc)
                    *(rcx_22 + 0xc) -= 1
                    
                    if (rax_25 == 1)
                        (*(*rcx_22 + 8))(rcx_22, 1)
                
                arg1[8] = var_80
            
            if (var_70 != 0)
                var_70[1].d -= 1
                
                if (var_70[1].d == 1)
                    (**var_70)(var_70)
                    int32_t rsi_2 = *(var_70 + 0xc)
                    *(var_70 + 0xc) -= 1
                    
                    if (rsi_2 == 1)
                        (*(*var_70 + 8))(var_70, zx.q(rsi_2))
            
            if (arg1 != -0x48)
                LeaveCriticalSection(&arg1[9])
            
            goto label_140ac1649
        
        if (sub_140790310(rdi_2) != 0)
            void var_58
            int64_t* rax_18 = sub_140a735e0(rdi_2, &var_58, &arg1[4])
            
            if (&var_88 != rax_18)
                var_88 = *rax_18
                *rax_18 = 0
                sub_1405aeff0(&var_80, &rax_18[1])
            
            int64_t* var_50
            
            if (var_50 != 0)
                var_50[1].d -= 1
                
                if (var_50[1].d == 1)
                    (**var_50)(var_50)
                    int32_t rax_21 = *(var_50 + 0xc)
                    *(var_50 + 0xc) -= 1
                    
                    if (rax_21 == 1)
                        (*(*var_50 + 8))(var_50, 1)
            
            goto label_140ac15bf
        
        *arg2 = 0
        arg2[1] = 0
        
        if (var_70 != 0)
            var_70[1].d -= 1
            
            if (var_70[1].d == 1)
                (**var_70)(var_70)
                int32_t rax_13 = *(var_70 + 0xc)
                *(var_70 + 0xc) -= 1
                
                if (rax_13 == 1)
                    (*(*var_70 + 8))(var_70, 1)
    else
        *arg2 = 0
        arg2[1] = 0
    
    if (arg1 != -0x48)
        LeaveCriticalSection(&arg1[9])
    
    int64_t* rcx_14 = var_80
    
    if (rcx_14 != 0)
        rcx_14[1].d -= 1
        
        if (rcx_14[1].d == 1)
            int64_t* rbx_2 = var_80
            (**rbx_2)(rbx_2)
            int32_t rsi_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rsi_1 == 1)
                int64_t* rcx_16 = var_80
                (*(*rcx_16 + 8))(rcx_16, zx.q(rsi_1))
return arg2
