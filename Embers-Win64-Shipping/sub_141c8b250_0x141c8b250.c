// 函数: sub_141c8b250
// 地址: 0x141c8b250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x90) == 0 || *(arg1 + 0x80) == 0)
    return 

int64_t* rbx_1 = *arg2
void var_50
int64_t* rax_1 = sub_140b29d90(&var_50)

if (*(*(*rbx_1 + 0x10))(rbx_1) s< *rax_1)
    return 

int64_t* rcx_3 = *arg2
char* rax_3 = (*(*rcx_3 + 0x48))(rcx_3)
CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x28)
EnterCriticalSection(lpCriticalSection)
void arg_8
int32_t rdi_3 = *sub_141c88700(arg1 + 0x30, &arg_8, rax_3)

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

if (rdi_3 == 0xffffffff)
    int64_t* rcx_7 = *arg2
    int128_t* rax_6 = (*(*rcx_7 + 0x48))(rcx_7)
    CRITICAL_SECTION* lpCriticalSection_1 = *(arg1 + 0x28)
    EnterCriticalSection(lpCriticalSection_1)
    int128_t* rax_8 = sub_141c80bb0(arg1 + 0x30, sub_140b212b0(rax_6, 0x10, 0), rax_6)
    *rax_8 = *arg3
    
    if (lpCriticalSection_1 != 0)
        LeaveCriticalSection(lpCriticalSection_1)
    
    int64_t* rsi_1 = *(arg1 + 0x10)
    int64_t var_48
    
    if (rsi_1 == 0)
        var_48 = 0
    else
        int32_t rax_9 = 0
        bool z_1
        
        if (0 == rsi_1[1].d)
            rsi_1[1].d = 0
            z_1 = true
        else
            rax_9 = rsi_1[1].d
            z_1 = false
        
        if (z_1)
        label_141c8b388:
            rsi_1 = nullptr
            var_48 = 0
        else
            while (true)
                bool z_2
                
                if (rax_9 == rsi_1[1].d)
                    rsi_1[1].d = rax_9 + 1
                    z_2 = true
                else
                    rsi_1[1].d
                    z_2 = false
                
                if (z_2)
                    break
                
                rax_9 = 0
                bool z_3
                
                if (0 == rsi_1[1].d)
                    rsi_1[1].d = 0
                    z_3 = true
                else
                    rax_9 = rsi_1[1].d
                    z_3 = false
                
                if (z_3)
                    goto label_141c8b388
            
            if (rsi_1 == 0)
                var_48 = 0
            else
                int64_t rax_29 = *(arg1 + 8)
                
                if (rax_29 == 0)
                    var_48 = 0
                else
                    var_48 = rax_29 + 8
    
    if (rsi_1 != 0)
        rsi_1[1].d += 1
    
    int64_t* rcx_13 = *arg2
    int64_t* rbx_2 = *(arg1 + 0x80)
    (*(*rbx_2 + 0x20))(rbx_2, (*(*rcx_13 + 0x48))(rcx_13), &var_48)
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t rax_15 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (rax_15 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t rax_19 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (rax_19 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)

int64_t* rbx_4 = *(arg1 + 0x10)
int64_t var_38

if (rbx_4 == 0)
    var_38 = 0
else
    int32_t rax_21 = 0
    bool z_4
    
    if (0 == rbx_4[1].d)
        rbx_4[1].d = 0
        z_4 = true
    else
        rax_21 = rbx_4[1].d
        z_4 = false
    
    if (z_4)
    label_141c8b458:
        rbx_4 = nullptr
        var_38 = 0
    else
        while (true)
            bool z_5
            
            if (rax_21 == rbx_4[1].d)
                rbx_4[1].d = rax_21 + 1
                z_5 = true
            else
                rbx_4[1].d
                z_5 = false
            
            if (z_5)
                break
            
            rax_21 = 0
            bool z_6
            
            if (0 == rbx_4[1].d)
                rbx_4[1].d = 0
                z_6 = true
            else
                rax_21 = rbx_4[1].d
                z_6 = false
            
            if (z_6)
                goto label_141c8b458
        
        if (rbx_4 == 0)
            var_38 = 0
        else
            int64_t rax_31 = *(arg1 + 8)
            
            if (rax_31 == 0)
                var_38 = 0
            else
                var_38 = rax_31 + 0x10

if (rbx_4 != 0)
    rbx_4[1].d += 1

int64_t* rcx_20 = *arg2
int64_t* rsi_2 = *(arg1 + 0x80)
int64_t var_58 = 0
(**rsi_2)(rsi_2, arg2, (*(*rcx_20 + 0x30))(rcx_20), &var_58, &var_38)

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int64_t* rax = zx.q(*(rbx_4 + 0xc))
        *(rbx_4 + 0xc) -= 1
        
        if (rax.d == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

if (rbx_4 == 0)
    return 

rbx_4[1].d -= 1

if (rbx_4[1].d != 1)
    return 

(**rbx_4)(rbx_4)
int32_t rbp_1 = *(rbx_4 + 0xc)
*(rbx_4 + 0xc) -= 1

if (rbp_1 == 1)
    (*(*rbx_4 + 8))(rbx_4, zx.q(rbp_1))
