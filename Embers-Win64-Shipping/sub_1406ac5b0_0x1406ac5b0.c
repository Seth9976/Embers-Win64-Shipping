// 函数: sub_1406ac5b0
// 地址: 0x1406ac5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
enum std::regex_constants::error_type rbp

if (arg2 == 0x3a)
    rbp = arg2 - 0x39
else if (arg2 != 0x3d)
    rbp = error_syntax
    
    if (arg2 == 0x2e)
        rbp = error_collate
else
    rbp = error_collate

char* r14 = *arg1
int32_t i = *(arg1 + 0x7c)

if (i != 0x3a)
    int32_t i_1 = i
    
    do
        i = i_1
        
        if (i_1 == 0x3d)
            break
        
        if (i_1 == 0x2e)
            break
        
        if (i_1 == 0xffffffff)
            break
        
        char* rcx = *arg1
        int64_t rax_1 = arg1[2]
        
        if (rcx != rax_1)
            if (*rcx == 0x5c)
                void* rdx = &rcx[1]
                rcx = rdx
                
                if (rdx == rax_1)
                    rcx = *arg1
                else
                    char r8_1 = (arg1[0x10].d).b
                    
                    if (((r8_1 & 8) != 0 || *rdx - 0x28 u> 1)
                            && ((r8_1 & 0x10) != 0 || ((*rdx - 0x7b) & 0xfd) != 0))
                        rcx = *arg1
            
            *arg1 = &rcx[1]
        
        sub_1406af960(arg1)
        i = *(arg1 + 0x7c)
        rsi += 1
        i_1 = i
    while (i != 0x3a)

if (i != arg2)
    sub_1406ad7b0(arg1, rbp)
    noreturn

if (arg2 == 0x3a)
    int16_t rax_5 = sub_14068b610(arg1[0xd], r14, *arg1, (arg1[0xe].d u>> 8).b & 1)
    
    if (rax_5 == 0)
        sub_1406ad7b0(arg1, error_ctype)
        noreturn
    
    sub_1406a9b00(&arg1[8], rax_5, 0)
else if (arg2 == 0x3d)
    int64_t r8_3 = *arg1
    
    if (r14 == r8_3)
        sub_1406ad7b0(arg1, error_collate)
        noreturn
    
    sub_1406a98d0(&arg1[8], r14, r8_3)
else if (arg2 == 0x2e)
    int64_t r8_4 = *arg1
    
    if (r14 == r8_4)
        sub_1406ad7b0(arg1, error_collate)
        noreturn
    
    sub_1406aad00(&arg1[8], r14, r8_4, rsi.d, arg1[9] + 0x20)

sub_1406aec20(arg1)
return sub_1406ad860(arg1, 0x5d, rbp) __tailcall
