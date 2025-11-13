// 函数: sub_140ebbc20
// 地址: 0x140ebbc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg1
int128_t zmm6 = *(arg1 + 0x3a0)
int64_t* r12 = nullptr
int32_t arg_18 = 0
int32_t rax = sub_140f47e50(*(arg1 + 0x3a8))
void* rdi = nullptr
int128_t var_58
void*** r8 = *sub_140ec5720(&var_58)
r8[4].d = rax
int64_t* rbx_1 = r8[2]

if (rbx_1 != 0)
    int32_t rax_2 = rbx_1[1].d
    
    if (rax_2 != 0)
        rbx_1[1].d = rax_2 + 1
        rax_2.b = 1
    
    if (rax_2.b == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        int32_t rax_3 = rbx_1[1].d
        rdi = r8[1]
        rbx_1[1].d = rax_3
        
        if (rax_3 == 0)
            (**rbx_1)(rbx_1)
            int32_t temp4_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rsi = *(rdi + 0x10)
void* const r13 = nullptr
*(rdi + 0x18) = zmm6.d
arg_18.q = rsi

if (rsi != 0)
    int32_t rax_6 = rsi[1].d
    
    if (rax_6 != 0)
        rsi[1].d = rax_6 + 1
        rax_6.b = 1
    
    if (rax_6.b == 0)
        rsi = nullptr
    
    arg_18.q = rsi
    
    if (rsi != 0)
        int32_t rax_7 = rsi[1].d
        r13 = *(rdi + 8)
        rsi[1].d = rax_7
        
        if (rax_7 == 0)
            (**rsi)(rsi)
            int32_t temp5_1 = *(rsi + 0xc)
            *(rsi + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rsi + 8))(rsi, 1)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t temp3_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_50 + 8))(var_50, 1)

int32_t i = 0
int64_t* var_60
void** rcx_20
int32_t rdi_2

if (*(rbp + 0x3c0) s<= 0)
label_140ebbf1f:
    rcx_20 = &var_58
    var_58 = zx.o(0)
    rdi_2 = 2
    r13 = nullptr
else
    rsi.b = 0
    void* const var_68
    
    do
        int64_t* rcx_10 = *(r12 + *(rbp + 0x3b8))
        (*(*rcx_10 + 0x278))(rcx_10, &var_68)
        void* const r14_1 = var_68
        
        if (r14_1 != 0)
            rsi.b = 1
            
            if (var_60 != 0)
                var_60[1].d += 1
            
            int64_t rbp_1 = sx.q(*(r13 + 0x30))
            int32_t rax_16 = (rbp_1 + 1).d
            *(r13 + 0x30) = rax_16
            
            if (rax_16 s> *(r13 + 0x34))
                sub_1405a4f90(r13 + 0x28)
            
            int64_t* rax_19 = (rbp_1 << 4) + *(r13 + 0x28)
            *rax_19 = r14_1
            rax_19[1] = var_60
            
            if (var_60 != 0)
                var_60[1].d += 1
            
            int64_t* rbx_3 = *(r13 + 0x10)
            
            if (rbx_3 != 0)
                int32_t rax_20 = rbx_3[1].d
                
                if (rax_20 == 0)
                    rbx_3 = nullptr
                else
                    rbx_3[1].d = rax_20 + 1
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d = rax_20 + 1
                        
                        if (rax_20 == 0xffffffff)
                            (**rbx_3)(rbx_3)
                            int32_t temp18_1 = *(rbx_3 + 0xc)
                            *(rbx_3 + 0xc) -= 1
                            
                            if (temp18_1 == 1)
                                (*(*rbx_3 + 8))(rbx_3, 1)
            
            if (var_60 != 0)
                var_60[1].d -= 1
                
                if (var_60[1].d == 1)
                    (**var_60)(var_60)
                    int32_t temp16_1 = *(var_60 + 0xc)
                    *(var_60 + 0xc) -= 1
                    
                    if (temp16_1 == 1)
                        (*(*var_60 + 8))(var_60, 1)
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp17_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp17_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            rbp = arg1
        
        if (var_60 != 0)
            var_60[1].d -= 1
            
            if (var_60[1].d == 1)
                (**var_60)(var_60)
                int32_t temp11_1 = *(var_60 + 0xc)
                *(var_60 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*var_60 + 8))(var_60, 1)
        
        i += 1
        r12 = &r12[2]
    while (i s< *(rbp + 0x3c0))
    
    bool cond:0_1 = rsi.b == 0
    rsi = arg_18.q
    
    if (cond:0_1)
        goto label_140ebbf1f
    
    var_68 = r13
    var_60 = rsi
    
    if (rsi != 0)
        rsi[1].d += 1
    
    rcx_20 = &var_68
    rdi_2 = 1

int64_t rax_30 = rcx_20[1]
rcx_20[1] = 0
*rcx_20 = nullptr
*arg2 = r13
arg2[1] = rax_30

if ((rdi_2.b & 2) != 0)
    rdi_2 &= 0xfffffffd
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t temp10_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*var_50 + 8))(var_50, 1)

if ((rdi_2.b & 1) != 0 && var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        (**var_60)(var_60)
        int32_t temp13_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*(*var_60 + 8))(var_60, 1)

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        (**rsi)(rsi)
        int32_t temp12_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*rsi + 8))(rsi, 1)

return arg2
