// 函数: sub_1406b6f00
// 地址: 0x1406b6f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* rcx = nullptr
void* var_60 = nullptr
int64_t* r8 = *(arg2 + 0x38)
void var_98

if (r8 != 0)
    void* rax_3 = (**r8)(r8, &var_98)
    rcx = rax_3
    var_60 = rax_3

void* rax_4 = rcx
void* rdx_1

if (rcx != &var_98)
    rdx_1 = *(arg1 + 0x38)

if (rcx == &var_98 || rdx_1 == arg1)
    void* r8_1 = nullptr
    void* var_20_1 = nullptr
    void var_58
    
    if (rax_4 != 0)
        if (rax_4 != &var_98)
            r8_1 = rcx
            var_20_1 = rcx
            rcx = nullptr
            var_60 = nullptr
        else
            void* rax_6
            rax_6, rdx_1 = (*(*rcx + 8))(rcx, &var_58)
            r8_1 = rax_6
            var_20_1 = rax_6
            rcx = var_60
            
            if (rcx != 0)
                void* rdx_3
                rdx_3.b = rcx != &var_98
                (*(*rcx + 0x20))(rcx, rdx_3, r8_1)
                r8_1 = var_20_1
                rcx = nullptr
                var_60 = nullptr
    
    void* r9_1 = *(arg1 + 0x38)
    
    if (r9_1 != 0)
        rcx = r9_1
        
        if (r9_1 != arg1)
            var_60 = rcx
            *(arg1 + 0x38) = 0
        else
            void* rax_9
            rax_9, rdx_1 = (*(*r9_1 + 8))(rcx, &var_98)
            rcx = rax_9
            var_60 = rax_9
            int64_t* r8_2 = *(arg1 + 0x38)
            
            if (r8_2 == 0)
                r8_1 = var_20_1
            else
                rdx_1.b = r8_2 != arg1
                (*(*r8_2 + 0x20))(r8_2, rdx_1)
                rcx = var_60
                r8_1 = var_20_1
                *(arg1 + 0x38) = 0
    
    if (r8_1 != 0)
        if (r8_1 != &var_58)
            *(arg1 + 0x38) = r8_1
        else
            int64_t rax_12
            rax_12, rdx_1 = (*(*r8_1 + 8))(r8_1, arg1)
            *(arg1 + 0x38) = rax_12
            
            if (var_20_1 != 0)
                void* rdx_6
                rdx_6.b = var_20_1 != &var_58
                (*(*var_20_1 + 0x20))(var_20_1, rdx_6)
            
            rcx = var_60
else
    rcx = rdx_1
    void* var_60_1 = rdx_1
    *(arg1 + 0x38) = rax_4

if (rcx != 0)
    int64_t r8_3 = *rcx
    rdx_1.b = rcx != &var_98
    (*(r8_3 + 0x20))(rcx, rdx_1, r8_3)

__security_check_cookie(rax_1 ^ &var_b8)
return arg1
