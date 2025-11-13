// 函数: sub_140fb2a00
// 地址: 0x140fb2a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0x99]
int64_t result = 0
int64_t* r15 = nullptr

if (rdi != 0)
    int32_t rax_1 = rdi[1].d
    
    if (rax_1 != 0)
        rdi[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rdi = nullptr
    
    if (rdi != 0)
        r15 = arg1[0x98]

void var_28
int64_t* rcx_1 = *(*(*r15 + 0xe0))(r15, &var_28)
char rax_5 = (*(*rcx_1 + 0x1a0))(rcx_1)
int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        int64_t rdx_1 = *var_20
        (*rdx_1)(var_20, rdx_1)
        int32_t temp1_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

TEB* gsbase

if (data_143e2b800 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2b800)
    
    if (data_143e2b800 == 0xffffffff)
        sub_140b58170(&data_143e2b7f8, "GenericWhiteBox", 1)
        _Init_thread_footer(&data_143e2b800)

int64_t* rcx_6 = data_143e243c8
(*(*rcx_6 + 0x48))(rcx_6, data_143e2b7f8, 0)
int64_t rax_11 = (*(*r15 + 0x48))(r15, arg1)

if (rax_11 != 0)
    int64_t r8_1 = *r15
    char rax_12 = (*(r8_1 + 0x10))(r15, rax_11, r8_1)
    int64_t r8_2 = *r15
    char rax_13 = (*(r8_2 + 0x20))(r15, rax_11, r8_2)
    int64_t rdx_6 = *arg1
    int64_t* r14
    r14.b = (*(rdx_6 + 0x70))(arg1, rdx_6) != 0
    char rbp_1 = not.b(arg1[0x9a].b) & 1
    
    if (rax_12 != 0)
        if (*(arg1 + 0x4d4) == 0)
            goto label_140fb2c13
        
        char rax_16 = (*(arg1[1] + 0x1c8))(&arg1[1])
        int64_t rbx_1 = arg1[0x9c]
        
        if (rax_5 != 0)
            int64_t rcx_12 = 0x118
            
            if (rax_16 != 0)
                rcx_12 = 0x90
            
            result = rbx_1 + rcx_12
        else if (rax_16 == 0)
            result = rbx_1 + 0x228
        else
            result = rbx_1 + 0x1a0
    else if (rax_13 == 0)
    label_140fb2c13:
        char rax_20 = (*(arg1[1] + 0x1c8))(&arg1[1])
        
        if (rbp_1 == 0)
            if (rax_20 == 0 || r14.b == 0)
                result = arg1[0x9c] + 0x448
            else
                result = arg1[0x9c] + 0x3c0
        else if (rax_20 == 0 || r14.b == 0)
            result = arg1[0x9c] + 0x338
        else
            result = 0x2b0 + arg1[0x9c]
    else
        char rax_18 = (*(arg1[1] + 0x1c8))(&arg1[1])
        int64_t rcx_14 = arg1[0x9c]
        
        if (rax_5 == 0)
            if (rax_18 == 0)
                result = rcx_14 + 0x740
            else
                int64_t rbx_3 = 0x2b0
                
                if (rbp_1 == 0)
                    rbx_3 = 0x3c0
                
                result = rbx_3 + rcx_14
        else if (rax_18 == 0)
            result = rcx_14 + 0x6b8
        else
            int64_t rbx_2 = 0x2b0
            
            if (rbp_1 == 0)
                rbx_2 = 0x3c0
            
            result = rbx_2 + rcx_14

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp3_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_4 = *rdi
            (*(r8_4 + 8))(rdi, 1, r8_4)

return result
