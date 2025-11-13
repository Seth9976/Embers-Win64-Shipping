// 函数: sub_140e73450
// 地址: 0x140e73450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x1d0)
char rax

if (rcx != 0)
    rax = (*(*rcx + 8))(rcx)

if (rcx == 0 || rax == 0)
    rax = 0
else
    rax = 1

int32_t var_128
int64_t* var_120

if (rax != 0)
    int64_t* rbx_1 = *(arg1 + 0x1d8)
    int64_t rdi_1 = *(arg1 + 0x1d0)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    void** var_a8
    sub_140e51390(&var_a8, arg2)
    int64_t var_38_1 = rdi_1
    var_a8 = &data_142ed7318
    
    if (rbx_1 != 0)
        int32_t rax_2 = rbx_1[1].d
        rbx_1[1].d = rax_2
        
        if (rax_2 == 0)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rcx_4 = *(arg1 + 0x1d0)
    (*(*rcx_4 + 0x18))(rcx_4, &var_a8)
    
    if (sub_140db3500(arg3) != 0)
        int64_t* rax_7 = sub_140db22a0(arg3, &var_128)
        *(arg1 + 0x1e0) = *rax_7
        void* rdi_2 = rax_7[1]
        int64_t* rcx_8 = *(arg1 + 0x1e8)
        
        if (rdi_2 != rcx_8)
            if (rdi_2 != 0)
                *(rdi_2 + 0xc) += 1
                rcx_8 = *(arg1 + 0x1e8)
            
            if (rcx_8 != 0)
                int32_t temp7_1 = *(rcx_8 + 0xc)
                *(rcx_8 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rcx_8 + 8))(rcx_8, 1)
            
            *(arg1 + 0x1e8) = rdi_2
        
        int64_t* rbx_3 = var_120
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp6_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
    else if (arg1 + 0x1e0 != &var_128)
        *(arg1 + 0x1e0) = 0
        int64_t* rcx_10 = *(arg1 + 0x1e8)
        *(arg1 + 0x1e8) = 0
        
        if (rcx_10 != 0)
            int32_t temp3_1 = *(rcx_10 + 0xc)
            *(rcx_10 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rcx_10 + 8))(rcx_10, 1)
    
    if (*(arg1 + 0x20) != 0)
        int64_t* rcx_11 = *(arg1 + 0x1d0)
        char var_e8[0x40]
        (*(*rcx_11 + 0x20))(rcx_11, &var_e8)
        
        if (var_e8[0] == 0)
            var_128.b = 1
            int32_t var_f0_1 = 1
            __builtin_memset(&var_120, 0, 0x30)
            sub_140e54cd0(&var_e8, &var_128)
            sub_140ddf250(&var_128)
        
        sub_140e7b000(arg1, &var_e8)
        sub_140ddf250(&var_e8)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp9_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* var_60
    
    if (var_60 != 0)
        var_60[1].d -= 1
        
        if (var_60[1].d == 1)
            (**var_60)(var_60)
            int32_t temp10_1 = *(var_60 + 0xc)
            *(var_60 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*var_60 + 8))(var_60, 1)
else if (*(arg1 + 0x1d0) == 0 && arg1 + 0x1e0 != &var_128)
    *(arg1 + 0x1e0) = 0
    int64_t* rcx_19 = *(arg1 + 0x1e8)
    *(arg1 + 0x1e8) = 0
    
    if (rcx_19 != 0)
        int32_t temp1_1 = *(rcx_19 + 0xc)
        *(rcx_19 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx_19 + 8))(rcx_19, 1)

int32_t rbx_6 = *(arg2 + 0x50)
sub_140a9e570(arg1 + 0xe0, &var_128)
int64_t* rdx_7 = var_120
int32_t rax_17 = var_128
*rdx_7 = rbx_6
*(rdx_7 + 4) = *(arg2 + 0x18)
*(rdx_7 + 0xc) = 0xffffffff
int32_t arg_8
sub_140e60eb0(arg1 + 0xe0, &arg_8, rbx_6, rdx_7, rax_17, nullptr)
arg_8 = *(arg2 + 0x50)
sub_140e47410(arg1 + 0x1f0, &arg_8, sub_140d94220(&var_128, arg3))
int64_t* var_110

if (var_110 != 0)
    int32_t temp0_1 = *(var_110 + 0xc)
    *(var_110 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*var_110 + 8))(var_110, 1)

return sub_140d94cb0(&var_128)
