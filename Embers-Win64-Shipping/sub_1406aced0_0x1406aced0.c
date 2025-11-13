// 函数: sub_1406aced0
// 地址: 0x1406aced0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx
void* var_10 = rbx
void* r13 = arg2
int32_t r15 = 0
void var_88
sub_14068c240(&var_88, arg1)
int64_t rsi = arg1[5]
int64_t rdi = arg1[6]
void* var_d8 = nullptr
void* var_60
__builtin_memset(&var_60, 0, 0x18)
int128_t var_58

if (rsi != rdi)
    int64_t rdi_1 = rdi - rsi
    int64_t rbx_2 = rdi_1 s>> 4
    void* rax_1 = sub_1406afec0(&var_60, rbx_2)
    rbx = (rbx_2 << 4) + rax_1
    var_d8 = rax_1
    var_58:8.q = rbx
    var_60 = rax_1
    memmove(rax_1, rsi, rdi_1.d)
    var_58.q = rbx

void* var_80
void* rdi_5
void* r14_1

if (*(r13 + 0x20) s> 0)
    void* rcx_3 = *arg1
    
    while (true)
        rbx = rcx_3
        
        if (sub_1406ae3c0(arg1, *(r13 + 0x10)) == 0)
            sub_140693000(arg1, &var_88)
            r14_1 = var_60
            rbx.b = 0
            rdi_5 = var_80
            break
        
        int32_t rax_3 = *(r13 + 0x20)
        rcx_3 = *arg1
        int32_t r15_1 = rax_3 - 1
        
        if (rbx != rcx_3)
            r15_1 = r15
        
        r15 = r15_1 + 1
        
        if (r15 s>= rax_3)
            goto label_1406acfab
    
    goto label_1406ad363

label_1406acfab:
int64_t var_c8
sub_14068c240(&var_c8, arg1)
int64_t r12_1 = arg1[5]
void* rsi_1 = nullptr
int64_t rdi_3 = arg1[6]
void* var_a0
__builtin_memset(&var_a0, 0, 0x18)
int128_t var_98

if (r12_1 != rdi_3)
    int64_t rdi_4 = rdi_3 - r12_1
    int64_t rbx_5 = rdi_4 s>> 4
    void* rax_4 = sub_1406afec0(&var_a0, rbx_5)
    rbx = (rbx_5 << 4) + rax_4
    var_a0 = rax_4
    var_98:8.q = rbx
    rsi_1 = rax_4
    memmove(rax_4, r12_1, rdi_4.d)
    var_98.q = rbx

char arg_8 = 0
rbx = *arg1
void* arg_20 = rbx
char rax_5 = sub_1406ae3c0(arg1, *(*(r13 + 0x28) + 0x10))
rdi_5 = var_80

if (rax_5 == 0)
    goto label_1406ad047

void* var_c0

if (arg3 == 0)
label_1406ad2be:
    r14_1 = var_d8
    rbx.b = 1
else
    sub_140693000(&var_c8, arg1)
    rsi_1 = var_a0
    arg_8 = 1
label_1406ad047:
    
    while (true)
        int32_t rcx_10 = *(r13 + 0x24)
        int32_t rax_6
        
        if (rcx_10 != 0xffffffff)
            rax_6 = r15
            r15 += 1
        
        if (rcx_10 == 0xffffffff || rax_6 s< rcx_10)
            *arg1 = rbx
            
            if (&arg1[1] != &var_80)
                int64_t var_78
                void* r12_3 = var_78 - var_80
                void* r8_2 = arg1[1]
                int64_t rdx_11 = r12_3 s>> 2
                int64_t rcx_13 = (arg1[3] - r8_2) s>> 2
                
                if (rdx_11 u> rcx_13)
                    if (rdx_11 u> 0x3fffffffffffffff)
                        sub_140610c20()
                        noreturn
                    
                    uint64_t r9_2 = rcx_13 u>> 1
                    int64_t rbx_7
                    
                    if (rcx_13 u<= 0x3fffffffffffffff - r9_2)
                        rbx_7 = r9_2 + rcx_13
                        
                        if (rbx_7 u< rdx_11)
                            rbx_7 = rdx_11
                    else
                        rbx_7 = 0x3fffffffffffffff
                    
                    if (r8_2 != 0)
                        if (rcx_13 << 2 u>= 0x1000)
                            void* rcx_15 = *(r8_2 - 8)
                            
                            if (r8_2 - rcx_15 - 8 u> 0x1f)
                                goto label_1406ad3cd
                            
                            r8_2 = rcx_15
                        
                        j_sub_140a74f90(r8_2)
                        __builtin_memset(&arg1[1], 0, 0x18)
                    
                    void* rax_9 = public: struct `void * __cdecl phmap::container_internal::Allocate<4, class std::allocator<struct std::pair<unsigned long const, unsigned long>>>(class std::allocator<struct std::pair<unsigned long const, unsigned long>> *, unsigned __int64)'::`2'::M * __cdecl std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<4, class std::allocator<struct std::pair<unsigned long const, unsigned long>>>(class std::allocator<struct std::pair<unsigned long const, unsigned long>> *, unsigned __int64)'::`2'::M>::allocate(unsigned __int64)(
                        &arg1[1], rbx_7)
                    arg1[1] = rax_9
                    arg1[2] = rax_9
                    arg1[3] = rax_9 + (rbx_7 << 2)
                
                rbx = arg1[1]
                memmove(rbx, var_80, r12_3.d)
                arg1[2] = r12_3 + rbx
                int64_t var_68
                arg1[4] = var_68
            
            if (sub_1406ae3c0(arg1, *(r13 + 0x10)) != 0)
                void* r13_1 = *arg1
                
                if (sub_1406ae3c0(arg1, *(*(arg2 + 0x28) + 0x10)) != 0)
                    if (arg3 == 0)
                        rdi_5 = var_80
                        goto label_1406ad2be
                    
                    var_c8 = *arg1
                    sub_140693140(&var_c0, &arg1[1])
                    rsi_1 = var_a0
                    
                    if (&var_a0 != &arg1[5])
                        void* rbx_8 = rsi_1
                        int64_t rax_17 = arg1[5]
                        void* r12_5 = arg1[6] - rax_17
                        arg_8.q = rax_17
                        int64_t rdx_23 = (var_98:8.q - rsi_1) s>> 4
                        int64_t rcx_23 = r12_5 s>> 4
                        
                        if (rcx_23 u> rdx_23)
                            if (rcx_23 u> 0xfffffffffffffff)
                                sub_140610c20()
                                noreturn
                            
                            uint64_t r8_6 = rdx_23 u>> 1
                            int64_t rdi_7
                            
                            if (rdx_23 u<= 0xfffffffffffffff - r8_6)
                                rdi_7 = r8_6 + rdx_23
                                
                                if (rdi_7 u< rcx_23)
                                    rdi_7 = rcx_23
                            else
                                rdi_7 = 0xfffffffffffffff
                            
                            if (rbx_8 != 0)
                                if (rdx_23 << 4 u>= 0x1000)
                                    void* rcx_24 = *(rsi_1 - 8)
                                    
                                    if (rbx_8 - rcx_24 - 8 u> 0x1f)
                                        goto label_1406ad3cd
                                    
                                    rbx_8 = rcx_24
                                
                                j_sub_140a74f90(rbx_8)
                            
                            void* rax_20 = sub_1406afec0(&var_a0, rdi_7)
                            rsi_1 = rax_20
                            var_a0 = rax_20
                            rbx_8 = rax_20
                            var_98:8.q = (rdi_7 << 4) + rax_20
                            rax_17 = arg_8.q
                        
                        memmove(rbx_8, rax_17, r12_5.d)
                        var_98.q = r12_5 + rbx_8
                    
                    arg_8 = 1
                
                if (arg_20 != r13_1)
                    rbx = r13_1
                    r13 = arg2
                    arg_20 = rbx
                    continue
        
        rbx = zx.q(arg_8)
        int64_t* rdx_27 = &var_c8
        
        if (rbx.b == 0)
            rdx_27 = &var_88
        
        sub_140693000(arg1, rdx_27)
        r14_1 = var_60
        rdi_5 = var_80
        rsi_1 = var_a0
        break

if (rsi_1 == 0)
    goto label_1406ad329

void* rax_22 = rsi_1

if (((var_98:8.q - rsi_1) & 0xfffffffffffffff0) u< 0x1000)
label_1406ad324:
    j_sub_140a74f90(rsi_1)
label_1406ad329:
    void* rcx_30 = var_c0
    
    if (rcx_30 == 0)
        goto label_1406ad363
    
    void* rax_25 = rcx_30
    int64_t var_b0
    
    if (((var_b0 - rcx_30) & 0xfffffffffffffffc) u< 0x1000)
    label_1406ad35e:
        j_sub_140a74f90(rcx_30)
    label_1406ad363:
        
        if (r14_1 == 0)
            goto label_1406ad39c
        
        void* rax_28 = r14_1
        
        if (((var_58:8.q - r14_1) & 0xfffffffffffffff0) u< 0x1000)
        label_1406ad397:
            j_sub_140a74f90(r14_1)
        label_1406ad39c:
            
            if (rdi_5 == 0)
                return zx.q(rbx.b)
            
            void* rax_31 = rdi_5
            int64_t var_70
            
            if (((var_70 - rdi_5) & 0xfffffffffffffffc) u< 0x1000)
                j_sub_140a74f90(rdi_5)
                return zx.q(rbx.b)
            
            rdi_5 = *(rdi_5 - 8)
            
            if (rax_31 - rdi_5 - 8 u<= 0x1f)
                j_sub_140a74f90(rdi_5)
                return zx.q(rbx.b)
        else
            r14_1 = *(r14_1 - 8)
            
            if (rax_28 - r14_1 - 8 u<= 0x1f)
                goto label_1406ad397
    else
        rcx_30 = *(rcx_30 - 8)
        
        if (rax_25 - rcx_30 - 8 u<= 0x1f)
            goto label_1406ad35e
else
    rsi_1 = *(rsi_1 - 8)
    
    if (rax_22 - rsi_1 - 8 u<= 0x1f)
        goto label_1406ad324

label_1406ad3cd:
_invalid_parameter_noinfo_noreturn()
noreturn
