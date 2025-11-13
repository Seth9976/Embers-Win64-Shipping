// 函数: sub_14232b7a0
// 地址: 0x14232b7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1433296a0

if (Concurrency::details::x81cd8a40::_Is_vista_threadpool_supported::operator[]::_Is_vista_threadpool_supported()
        != 0)
    sub_1405a46b0(sub_142417ea0(sub_14240f390()), arg1)

int64_t* rcx_2 = arg1[5]

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 1)

int64_t rax_4 = arg1[1]

if (rax_4 != 0 && arg1[3] != rax_4)
    int64_t* var_70 = nullptr
    int64_t var_78
    
    if (&arg1[1] != &var_78)
        arg1[1] = 0
        var_78 = 0
        sub_1405aeff0(&arg1[2], &var_70)
        int64_t* rcx_5 = var_70
        
        if (rcx_5 != 0)
            rcx_5[1].d -= 1
            
            if (rcx_5[1].d == 1)
                int64_t* rbx_1 = var_70
                (**rbx_1)(rbx_1)
                int32_t rax_7 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_7 == 1)
                    int64_t* rcx_7 = var_70
                    (*(*rcx_7 + 8))(rcx_7, 1)

int64_t rbx_2 = arg1[3]

if (rbx_2 != 0)
    int64_t* rdi_1 = arg1[4]
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
    
    char rax_9 = sub_140a80f40()
    
    if (rax_9 != 0)
    label_14232b8d7:
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t rax_13 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rax_13 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    else
        if (data_143f138f4 == rax_9)
            if (data_143de5480 == rax_9)
                goto label_14232b8d7
            
            uint32_t rax_10
            rax_10.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_10.b == 0)
                goto label_14232b92a
            
            goto label_14232b8d7
        
    label_14232b92a:
        void var_58
        void** rax_15 = sub_142331c50(&var_58, nullptr, 0xff)
        void* rcx_11 = *rax_15
        *(rcx_11 + 0x10) = rbx_2
        *(rcx_11 + 0x18) = rdi_1
        void* rcx_12 = *rax_15
        int32_t r8_1 = rax_15[2].d
        int64_t* rdx_3 = rax_15[1]
        int64_t* rbx_3 = *(rcx_12 + 0x28)
        int64_t* arg_10 = rbx_3
        int32_t* r15_1 = &rbx_3[9]
        
        if (rbx_3 != 0)
            *r15_1 += 1
            rbx_3 = arg_10
        
        sub_1405e48c0(rcx_12, rdx_3, r8_1, 1)
        
        if (rbx_3 != 0)
            int32_t rax_16 = *r15_1
            *r15_1 -= 1
            
            if (rax_16 == 1)
                sub_140a2f6e0(arg_10)
    
    int64_t* var_60 = nullptr
    int64_t var_68
    
    if (&arg1[3] != &var_68)
        arg1[3] = 0
        var_68 = 0
        sub_1405aeff0(&arg1[4], &var_60)
        int64_t* rcx_15 = var_60
        
        if (rcx_15 != 0)
            rcx_15[1].d -= 1
            
            if (rcx_15[1].d == 1)
                int64_t* rbx_4 = var_60
                (**rbx_4)(rbx_4)
                int32_t rax_19 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (rax_19 == 1)
                    int64_t* rcx_17 = var_60
                    (*(*rcx_17 + 8))(rcx_17, 1)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rax_23 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rax_23 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

if (arg1[7].d != 0xffffffff)
    int64_t* rcx_20 = *(data_143f5b298 + 0xaf8)
    
    if (rcx_20 != 0 && (*(*rcx_20 + 0xc0))(rcx_20) != 0)
        int64_t* rcx_21 = *(data_143f5b298 + 0xaf8)
        int64_t* rax_30 = (*(*rcx_21 + 0xc0))(rcx_21)
        int64_t r8_2 = *rax_30
        (*(r8_2 + 0x10))(rax_30, zx.q(arg1[7].d), r8_2)
        arg1[7].d = 0xffffffff

int64_t* rcx_23 = arg1[6]

if (rcx_23 != 0)
    (*(*rcx_23 + 0x38))(rcx_23)

int64_t* rbx_5 = arg1[4]

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        (**rbx_5)(rbx_5)
        int32_t rax_34 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (rax_34 == 1)
            (*(*rbx_5 + 8))(rbx_5, 1)

int64_t* rbx_6 = arg1[2]

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t rbp_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (rbp_1 == 1)
            (*(*rbx_6 + 8))(rbx_6, zx.q(rbp_1))

*arg1 = &data_142d4ba00
return &data_142d4ba00
