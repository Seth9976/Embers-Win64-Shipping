// 函数: sub_140e5fd30
// 地址: 0x140e5fd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t rax = data_143e20d28
int32_t arg_8 = 0
sub_140b34200("Prepass", rax)
int64_t* rsi
int64_t* rdi
int64_t r12
int64_t* r14
int32_t r15

if (*(arg1 + 0x1b8) s<= 0)
    rdi = rax.q
    rsi = nullptr
    r15 = 2
    r12 = 0
    r14 = nullptr
else
    int64_t rax_1 = *(arg1 + 0x1b0)
    int64_t rdx_2 = sx.q(*(arg1 + 0x1b8)) * 2
    rdi = *(rax_1 + (rdx_2 << 3) - 8)
    r12 = *(rax_1 + (rdx_2 << 3) - 0x10)
    
    if (rdi != 0)
        rdi[1].d += 1
    
    rsi = rax.q
    r15 = 1
    r14 = rdi
    
    if (rdi != 0)
        rdi[1].d += 1

if ((r15.b & 2) != 0)
    r15 &= 0xfffffffd
    
    if (rsi != 0)
        rsi[1].d -= 1
        
        if (rsi[1].d == 1)
            (**rsi)(rsi)
            int32_t temp2_1 = *(rsi + 0xc)
            *(rsi + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rsi + 8))(rsi, 1)

if ((r15.b & 1) != 0 && rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp3_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t var_38

if (r12 == 0)
    int64_t rax_14 = *arg2
    
    if (rax_14 == 0)
        int64_t* i = *(arg1 + 0x180)
        
        for (void* rdi_3 = &i[sx.q(*(arg1 + 0x188)) * 2]; i != rdi_3; i = &i[2])
            var_38 = *i
            void* rax_17 = i[1]
            void* var_30_5 = rax_17
            
            if (rax_17 != 0)
                *(rax_17 + 8) += 1
            
            sub_140e79eb0(&var_38)
    else
        var_38 = rax_14
        void* rax_15 = arg2[1]
        void* var_30_4 = rax_15
        
        if (rax_15 != 0)
            *(rax_15 + 8) += 1
        
        sub_140e79eb0(&var_38)
else
    var_38 = r12
    int64_t* var_30_1 = r14
    
    if (r14 != 0)
        r14[1].d += 1
    
    sub_140e79eb0(&var_38)
    
    for (int32_t i_1 = 0; i_1 s>= 0; i_1 += 1)
        if (i_1 s>= *(arg1 + 0x188))
            break
        
        int64_t* rsi_3 = (sx.q(i_1) << 4) + *(arg1 + 0x180)
        
        if (sub_140e1ab90(*rsi_3) != 0)
            var_38 = *rsi_3
            void* rax_8 = rsi_3[1]
            void* var_30_2 = rax_8
            
            if (rax_8 != 0)
                *(rax_8 + 8) += 1
            
            sub_140e79eb0(&var_38)
    
    void* const var_48 = nullptr
    int32_t i_4 = 0
    sub_140f05600(sub_140eff820(), &var_48)
    int32_t i_3
    
    while (true)
        i_3 = i_4
        
        if (rbx s< 0)
            break
        
        if (rbx s>= i_3)
            break
        
        int64_t* rcx_10 = (sx.q(rbx) << 4) + var_48
        var_38 = *rcx_10
        void* rax_11 = rcx_10[1]
        void* var_30_3 = rax_11
        
        if (rax_11 != 0)
            *(rax_11 + 8) += 1
        
        sub_140e79eb0(&var_38)
        rbx += 1
    
    if (i_3 != 0)
        int64_t* rsi_5 = var_48 + 8
        int32_t i_2
        
        do
            int64_t* rbx_1 = *rsi_5
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp10_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            rsi_5 = &rsi_5[2]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
    
    void* const rcx_14 = var_48
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)

if (r14 != 0)
    r14[1].d -= 1
    
    if (r14[1].d == 1)
        (**r14)(r14)
        int32_t temp6_1 = *(r14 + 0xc)
        *(r14 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*r14 + 8))(r14, 1)

int64_t result = sub_140b38680("Prepass", rax)
int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp7_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp7_1 == 1)
            jump(*(*rbx_2 + 8))

return result
