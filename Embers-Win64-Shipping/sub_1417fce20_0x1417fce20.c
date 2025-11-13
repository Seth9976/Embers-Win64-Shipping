// 函数: sub_1417fce20
// 地址: 0x1417fce20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b48
int64_t rax_1 = __security_cookie ^ &var_b48
int64_t* r13 = arg1
int32_t* rax_2 = sub_14067b2f0(arg2)
int32_t* rbx = rax_2
uint32_t result = sub_142898c70(rax_2)
uint32_t result_1 = result

if (result s> 0)
    int64_t count_2
    int64_t count_3 = count_2
    int64_t* rdi_1 = nullptr
    bool cond:0_1 = data_143ef9cc8 == 0
    int64_t var_ae0 = 0
    int64_t var_ad8_1 = 0
    void* var_af8 = nullptr
    int64_t var_af0_1 = 0
    uint64_t r12
    
    if (cond:0_1)
        r12.b = 0
    else
        int64_t* rcx_2 = data_143ef9cc0
        
        if (rcx_2 == 0)
            r12.b = 0
        else if ((*(*rcx_2 + 0x28))(rcx_2) == 0)
            r12.b = 0
        else
            r12.b = 1
    
    char var_b18_1 = r12.b
    int32_t r14_1 = 0
    int32_t var_b14_1 = 0
    
    if (result_1 s> 0)
        do
            void* rax_5 = sub_142898ea0(rbx, r14_1)
            int32_t rax_7 = sub_1428a29f0(sub_1427ec3c0(rax_5), nullptr)
            
            if (rax_7 s> 0)
                char* var_ac8 = nullptr
                int32_t var_abc_1 = 0
                sub_1405daba0(&var_ac8)
                char* rbx_1 = var_ac8
                char* var_ab0 = rbx_1
                sub_1428a29f0(sub_1427ec3c0(rax_5), &var_ab0)
                int32_t var_9e4_1 = 0x20
                uint32_t count = 0x20
                void var_9d8
                sub_14289bdc0(&var_9d8)
                sub_14289be50(&var_9d8, rbx_1, sx.q(rax_7))
                void var_a08
                sub_14289baa0(&var_a08, &var_9d8)
                int64_t rbx_2 = sx.q(var_ad8_1.d)
                int32_t rax_9 = (rbx_2 + 1).d
                var_ad8_1.d = rax_9
                
                if (rax_9 s> var_ad8_1:4.d)
                    sub_1405c4ec0(&var_ae0)
                
                int64_t rax_10 = var_ae0
                int64_t rcx_13 = rbx_2 * 5
                count_2 = sx.q(count)
                *(rax_10 + (rcx_13 << 3) + 0x20) = count_2.d
                void* rbx_3 = rax_10 + (rcx_13 << 3)
                
                if (count_2.d != 0)
                    sub_1417fc5d0(rbx_3, count_2.d, 0)
                    memcpy(rbx_3, &var_a08, count_2.d)
                else
                    *(rbx_3 + 0x24) = 0x20
                
                if (r12.b != 0)
                    void* var_a68_1 = nullptr
                    int32_t var_a5c_1 = 0x20
                    int128_t* var_a40_1 = nullptr
                    int32_t var_a38_1 = 0
                    int32_t var_a34_1 = 0x14
                    int64_t var_a30_1
                    __builtin_memset(&var_a30_1, 0, 0x20)
                    uint32_t count_1 = count
                    void var_a88
                    sub_1417fc670(&var_a88, count, 0x20)
                    void* rcx_17 = &var_a88
                    
                    if (var_a68_1 != 0)
                        rcx_17 = var_a68_1
                    
                    memcpy(rcx_17, &var_a08, count)
                    char var_848[0x800]
                    sub_1428a2e30(sub_1428a38f0(rax_5), &var_848, 0x800)
                    void* rdx_11 = nullptr
                    void* var_868_1 = nullptr
                    int64_t rax_13 = -1
                    
                    do
                        rax_13 += 1
                    while (var_848[rax_13] != 0)
                    
                    int32_t rbx_5 = (rax_13 + 1).d
                    int32_t var_858_1 = rax_13.d
                    
                    if (rbx_5 u> 0x80 && rbx_5 != 0)
                        void* rax_14 = sub_140a84c80(0, sx.q(rbx_5) * 2, 0)
                        rdx_11 = rax_14
                        var_868_1 = rax_14
                    
                    void var_968
                    void* rcx_20 = &var_968
                    
                    if (rdx_11 != 0)
                        rcx_20 = rdx_11
                    
                    sub_1405a7220(rcx_20, rbx_5, &var_848, rbx_5, 0x3f)
                    int64_t r15 = 0
                    int64_t var_b10 = 0
                    int32_t r14_2 = 0
                    int64_t var_b08_1 = 0
                    int32_t r12_1 = 0
                    
                    if (rcx_20 != 0 && *rcx_20 != 0)
                        int64_t rbx_6 = -1
                        
                        do
                            rbx_6 += 1
                        while (*(rcx_20 + (rbx_6 << 1)) != 0)
                        
                        if (rbx_6.d + 1 s> 0)
                            sub_1405947f0(&var_b10, rbx_6.d + 1)
                            r12_1 = var_b08_1:4.d
                            r14_2 = var_b08_1.d
                            r15 = var_b10
                        
                        r14_2 += rbx_6.d + 1
                        var_b08_1.d = r14_2
                        
                        if (r14_2 s> r12_1)
                            sub_140594770(&var_b10)
                            r12_1 = var_b08_1:4.d
                            r14_2 = var_b08_1.d
                            r15 = var_b10
                        
                        UnDecorator::getReferenceType(r15, rcx_20, (rbx_6.d + 1) * 2)
                    
                    if (var_868_1 != 0)
                        sub_140a74f90(var_868_1)
                    
                    int64_t rcx_25 = var_a30_1
                    
                    if (rcx_25 != 0)
                        sub_140a74f90(rcx_25)
                    
                    var_b10 = 0
                    int64_t var_a28_1
                    var_a28_1.d = r14_2
                    var_a28_1:4.d = r12_1
                    int64_t var_b08_2 = 0
                    int64_t var_a98
                    int64_t* rax_15 = sub_1417fc170(&var_a98, rax_5)
                    int64_t var_a20
                    
                    if (&var_a20 != rax_15)
                        int64_t rcx_27 = var_a20
                        
                        if (rcx_27 != 0)
                            sub_140a74f90(rcx_27)
                        
                        var_a20 = *rax_15
                        *rax_15 = 0
                        int64_t var_a18_1
                        var_a18_1.d = rax_15[1].d
                        var_a18_1:4.d = *(rax_15 + 0xc)
                        rax_15[1] = 0
                    
                    int64_t rcx_29 = var_a98
                    
                    if (rcx_29 != 0)
                        sub_140a74f90(rcx_29)
                    
                    int64_t rax_18 = sub_14289b970("sha1")
                    
                    if (rax_18 != 0)
                        int64_t rbx_9 = sx.q(var_a38_1)
                        int32_t var_ad0 = 0
                        int32_t rcx_30 = (rbx_9 + 0x14).d
                        int32_t var_a38_2 = rcx_30
                        void var_a58
                        
                        if (rcx_30 s> var_a34_1)
                            sub_1417fc720(&var_a58, rbx_9.d)
                        
                        int128_t* rcx_32 = &var_a58
                        int128_t* r8_6 = &var_a58
                        
                        if (var_a40_1 != 0)
                            rcx_32 = var_a40_1
                        
                        __builtin_memset(rcx_32 + rbx_9, 0, 0x14)
                        
                        if (var_a40_1 != 0)
                            r8_6 = var_a40_1
                        
                        sub_1428a2300(rax_5, rax_18, r8_6, &var_ad0)
                    
                    int64_t rbx_10 = sx.q(var_af0_1.d)
                    int32_t rax_21 = (rbx_10 + 1).d
                    var_af0_1.d = rax_21
                    
                    if (rax_21 s> var_af0_1:4.d)
                        sub_1407c3920(&var_af8)
                    
                    sub_1417fb020(rbx_10 * 0x78 + var_af8, &var_a88)
                    int64_t rcx_37 = var_a20
                    
                    if (rcx_37 != 0)
                        sub_140a74f90(rcx_37)
                    
                    if (r15 != 0)
                        sub_140a74f90(r15)
                    
                    if (var_a40_1 != 0)
                        sub_140a74f90(var_a40_1)
                    
                    if (var_a68_1 != 0)
                        sub_140a74f90(var_a68_1)
                    
                    r12 = zx.q(var_b18_1)
                    result_1 = result
                    r14_1 = var_b14_1
                
                char* rax_22 = var_ac8
                
                if (rax_22 != 0)
                    sub_140a74f90(rax_22)
                
                rbx = rax_2
            
            r14_1 += 1
            var_b14_1 = r14_1
        while (r14_1 s< result_1)
        
        r13 = arg1
    
    count_2.b = 0
    int64_t* rcx_42
    
    if (data_143ef9cc8 != 0)
        rcx_42 = data_143ef9cc0
    
    int64_t rbx_11
    
    if (data_143ef9cc8 == 0 || rcx_42 == 0)
        rbx_11 = arg3
    label_1417fd36d:
        char count_4 = (*(*r13 + 0x38))(r13, &var_ae0, rbx_11)
        count_2 = zx.q(count_4)
        
        if (count_4 == 0)
            sub_14289e590(arg2, 0x1b)
    else
        rbx_11 = arg3
        
        if ((*(*rcx_42 + 0x28))(rcx_42) == 0)
            goto label_1417fd36d
        
        if (data_143ef9cc8 != 0)
            rdi_1 = data_143ef9cc0
        
        if ((*(*rdi_1 + 0x48))(rdi_1, rbx_11, &var_af8) != 0)
            goto label_1417fd36d
        
        sub_14289e590(arg2, 0x1b)
    int32_t i_1 = var_af0_1.d
    
    if (i_1 != 0)
        void* rbx_13 = var_af8 + 0x58
        int32_t i
        
        do
            int64_t rcx_46 = *(rbx_13 + 0x10)
            
            if (rcx_46 != 0)
                sub_140a74f90(rcx_46)
            
            int64_t rcx_47 = *rbx_13
            
            if (rcx_47 != 0)
                sub_140a74f90(rcx_47)
            
            int64_t rcx_48 = *(rbx_13 - 0x10)
            
            if (rcx_48 != 0)
                sub_140a74f90(rcx_48)
            
            int64_t rcx_49 = *(rbx_13 - 0x38)
            
            if (rcx_49 != 0)
                sub_140a74f90(rcx_49)
            
            rbx_13 += 0x78
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    void* rcx_50 = var_af8
    
    if (rcx_50 != 0)
        sub_140a74f90(rcx_50)
    
    int64_t rcx_51 = var_ae0
    
    if (rcx_51 != 0)
        sub_140a74f90(rcx_51)
    
    result = zx.d(count_2.b)
else
    result.b = 0

__security_check_cookie(rax_1 ^ &var_b48)
return result
