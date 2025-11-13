// 函数: sub_140fc63f0
// 地址: 0x140fc63f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_318
int64_t rax_1 = __security_cookie ^ &var_318
int32_t var_298 = 0
int64_t* result = arg2
int64_t var_2e8 = 0
int64_t var_2e0 = 0
char r12 = 0
int64_t rdi = -1

if (arg3 != 0 && *arg3 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg3[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_2e8, rbx_1.d + 1)
    
    int32_t rax_2 = rbx_1.d + 1 + var_2e0.d
    var_2e0.d = rax_2
    
    if (rax_2 s> 0)
        sub_140594770(&var_2e8)
    
    UnDecorator::getReferenceType(var_2e8, arg3, (rbx_1.d + 1) * 2)

int64_t var_2d8 = 0
int64_t var_2d0 = 0

if (arg4 != 0 && *arg4 != 0)
    int64_t rbx_3 = -1
    
    do
        rbx_3 += 1
    while (arg4[rbx_3] != 0)
    
    if (rbx_3.d + 1 s> 0)
        sub_1405947f0(&var_2d8, rbx_3.d + 1)
    
    int32_t rax_3 = rbx_3.d + 1 + var_2d0.d
    var_2d0.d = rax_3
    
    if (rax_3 s> 0)
        sub_140594770(&var_2d8)
    
    UnDecorator::getReferenceType(var_2d8, arg4, (rbx_3.d + 1) * 2)

int64_t var_2c8 = 0
int64_t var_2c0 = 0
int32_t var_2b8 = 0x33
int64_t var_2b0 = 0
int64_t var_2a8 = 0

if (arg3 != 0 || arg4 != 0)
    bool cond:0_1 = data_143de5480 == 0
    uint64_t rbx_5 = data_143e2b858
    struct ADDRINFOA* ppResult = nullptr
    int64_t rcx_6
    
    if (cond:0_1)
        rcx_6 = 0
    else
        rcx_6.b = GetCurrentThreadId() != data_143de5470
    
    int32_t rax_11 = *(rbx_5 + (rcx_6 << 2))
    int64_t var_290
    char rax_13
    
    if (arg4 != 0)
        int32_t rdx_6 = 0
        int32_t rcx_7 = 0
        int32_t var_288_1 = 0
        int32_t var_284_1 = 0
        var_290 = 0
        
        if (*arg4 != 0)
            int64_t rbx_6 = -1
            
            do
                rbx_6 += 1
            while (arg4[rbx_6] != 0)
            
            rbx_5 = zx.q(rbx_6.d + 1)
            
            if (rbx_5.d s> 0)
                sub_1405947f0(&var_290, rbx_5.d)
                rcx_7 = var_284_1
                rdx_6 = var_288_1
            
            int32_t rax_12 = rbx_5.d + rdx_6
            int32_t var_288_2 = rax_12
            
            if (rax_12 s> rcx_7)
                sub_140594770(&var_290)
            
            UnDecorator::getReferenceType(var_290, arg4, rbx_5.d * 2)
        
        r12 = 1
        rax_13 = sub_140a24720(&var_290)
    
    if (arg4 == 0 || rax_13 == 0)
        rbx_5.b = 0
    else
        rbx_5 = 1
    
    if ((r12 & 1) != 0)
        int64_t rcx_12 = var_290
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
    
    int128_t zmm0 = zx.o(0)
    int128_t zmm1 = zx.o(0)
    struct ADDRINFOA hints
    hints.ai_socktype = zmm0.d
    hints.ai_protocol = zmm0:4.d
    hints.ai_addrlen = zmm0:8.q
    hints.ai_next = 0
    hints.ai_canonname = zmm1.q
    hints.ai_addr = zmm1:8.q
    void arg_30
    int32_t rax_15 = (*(*arg1 + 0x120))(arg1, &arg_30)
    int64_t r8_6 = *arg1
    int16_t rdx_10 = arg5 | 4
    hints.ai_family = rax_15
    
    if (rbx_5.b == 0)
        rdx_10 = arg5
    
    hints.ai_flags = (*(r8_6 + 0x148))(arg1, rdx_10, r8_6)
    
    if (arg6 != 0)
        int32_t rax_17 = 6
        
        if (arg6 == 1)
            rax_17 = 0x11
        
        hints.ai_protocol = rax_17
        int32_t rax_18
        rax_18.b = arg6 == 1
        hints.ai_socktype = rax_18 + 1
    
    void var_218
    PSTR pServiceName = *(sub_140685ed0(&var_218, arg4) + 0x88)
    void var_f8
    int32_t rax_22 =
        getaddrinfo(*(sub_140685ed0(&var_f8, arg3) + 0x88), pServiceName, &hints, &ppResult)
    int64_t var_78
    
    if (var_78 != 0)
        sub_140a74f90(var_78)
    
    int64_t var_198
    
    if (var_198 != 0)
        sub_140a74f90(var_198)
    
    int32_t var_2b8_1
    int32_t rax_23
    
    if (rax_22 s> 0x276d)
        if (rax_22 == 0x277d)
            rax_23 = 0x12
        label_140fc6803:
            var_2b8_1 = rax_23
            
            if (rax_23 == 0)
                struct ADDRINFOA* ai_next = ppResult
                struct ADDRINFOA* pAddrInfo = ai_next
                
                if (ai_next != 0)
                    CHAR* ai_canonname = ai_next->ai_canonname
                    
                    if (ai_canonname != 0)
                        int16_t* rbx_15 = *(sub_14060c4d0(&var_218, ai_canonname) + 0x108)
                        
                        if (rbx_15 != 0)
                            int32_t rdi_1
                            
                            if (*rbx_15 == 0)
                                rdi_1 = 0
                            else
                                do
                                    rdi += 1
                                while (rbx_15[rdi] != 0)
                                
                                rdi_1 = rdi.d + 1
                            
                            int32_t rdx_14 = 0
                            var_2c0.d = 0
                            
                            if (rdi_1 != 0)
                                sub_1405947f0(&var_2c8, rdi_1)
                                rdx_14 = var_2c0.d
                            
                            int32_t rax_25 = rdi_1 + rdx_14
                            var_2c0.d = rax_25
                            
                            if (rax_25 s> 0)
                                sub_140594770(&var_2c8)
                            
                            if (rdi_1 != 0)
                                memcpy(var_2c8, rbx_15, rdi_1 * 2)
                        
                        int64_t var_118
                        
                        if (var_118 != 0)
                            sub_140a74f90(var_118)
                        
                        ai_next = ppResult
                    
                    if (ai_next != 0)
                        do
                            int32_t ai_family = ai_next->ai_family
                            
                            if (ai_family == 2)
                            label_140fc68ee:
                                int64_t ai_addr = ai_next->ai_addr
                                
                                if (ai_addr != 0)
                                    void*** rax_26 = j_sub_140a82f30(0x90)
                                    void*** rbx_16
                                    
                                    if (rax_26 == 0)
                                        rbx_16 = nullptr
                                    else
                                        rbx_16 = sub_140fc4690(rax_26, arg1, 0)
                                    
                                    int64_t* rax_28 = j_sub_140a82f30(0x18)
                                    
                                    if (rax_28 == 0)
                                        rax_28 = nullptr
                                    else
                                        rax_28[1].d = 1
                                        *(rax_28 + 0xc) = 1
                                        *rax_28 = &data_142d42ea8
                                        rax_28[2] = rbx_16
                                    
                                    void** r9_1 = *rbx_16
                                    r9_1[0x17](rbx_16, ai_addr, zx.q(ppResult->ai_addrlen.d), r9_1)
                                    
                                    if (rax_28 != 0)
                                        rax_28[1].d += 1
                                    
                                    int64_t r8_12 = *arg1
                                    int32_t rax_32 =
                                        (*(r8_12 + 0x140))(arg1, zx.q(ppResult->ai_protocol), r8_12)
                                    int64_t r9_2 = *arg1
                                    int64_t rbx_17 = *(*(r9_2 + 0x130))(arg1, &var_290, 
                                        zx.q(ppResult->ai_family), r9_2)
                                    uint64_t ai_addrlen = ppResult->ai_addrlen
                                    
                                    if (rax_28 != 0)
                                        int32_t rax_34 = rax_28[1].d
                                        rax_28[1].d = rax_34
                                        
                                        if (rax_34 == 0)
                                            (**rax_28)(rax_28)
                                            int32_t temp7_1 = *(rax_28 + 0xc)
                                            *(rax_28 + 0xc) -= 1
                                            
                                            if (temp7_1 == 1)
                                                (*(*rax_28 + 8))(rax_28, 1)
                                    
                                    int64_t r8_14 = *arg1
                                    char rax_38 =
                                        (*(r8_14 + 0x138))(arg1, zx.q(ppResult->ai_family), r8_14)
                                    int64_t rsi_1 = sx.q(var_2a8.d)
                                    int32_t rcx_35 = (rsi_1 + 1).d
                                    var_2a8.d = rcx_35
                                    
                                    if (rcx_35 s> var_2a8:4.d)
                                        sub_1405c4ec0(&var_2b0)
                                    
                                    int64_t rcx_37 = var_2b0
                                    int64_t rdx_24 = rsi_1 * 5
                                    *(rcx_37 + (rdx_24 << 3)) = rax_38
                                    *(rcx_37 + (rdx_24 << 3) + 4) = rbx_17
                                    *(rcx_37 + (rdx_24 << 3) + 0xc) = rax_32
                                    *(rcx_37 + (rdx_24 << 3) + 0x10) = ai_addrlen
                                    *(rcx_37 + (rdx_24 << 3) + 0x18) = rbx_16
                                    *(rcx_37 + (rdx_24 << 3) + 0x20) = rax_28
                                    
                                    if (rax_28 != 0)
                                        int32_t rax_40 = rax_28[1].d
                                        rax_28[1].d = rax_40
                                        
                                        if (rax_40 == 0)
                                            (**rax_28)(rax_28)
                                            int32_t temp9_1 = *(rax_28 + 0xc)
                                            *(rax_28 + 0xc) -= 1
                                            
                                            if (temp9_1 == 1)
                                                (*(*rax_28 + 8))(rax_28, 1)
                                    
                                    if (rax_28 != 0)
                                        rax_28[1].d -= 1
                                        
                                        if (rax_28[1].d == 1)
                                            (**rax_28)(rax_28)
                                            int32_t temp10_1 = *(rax_28 + 0xc)
                                            *(rax_28 + 0xc) -= 1
                                            
                                            if (temp10_1 == 1)
                                                (*(*rax_28 + 8))(rax_28, 1)
                                    
                                    ai_next = ppResult
                            else if (ai_family == 0x17 && rax_11 == 0)
                                goto label_140fc68ee
                            
                            ai_next = ai_next->ai_next
                            ppResult = ai_next
                        while (ai_next != 0)
                        
                        result = arg2
                
                freeaddrinfo(pAddrInfo)
        else if (rax_22 == 0x2af9)
            var_2b8_1 = 0x30
        else if (rax_22 == 0x2afa)
            var_2b8_1 = 0x31
        else if (rax_22 == 0x2afb)
            var_2b8_1 = 0x32
        else if (rax_22 == 0x2afc)
            var_2b8_1 = 0x33
        else
            var_2b8_1 = 5
    else if (rax_22 == 0x276d)
        var_2b8_1 = 0x2f
    else
        if (rax_22 == 0)
            rax_23 = 0
            goto label_140fc6803
        
        if (rax_22 == 8)
            var_2b8_1 = 0x1b
        else if (rax_22 == 0x2726)
            var_2b8_1 = 5
        else if (rax_22 == 0x273c)
            var_2b8_1 = 0x10
        else if (rax_22 != 0x273f)
            var_2b8_1 = 5
        else
            var_2b8_1 = 0x13
    *result = var_2e8
    result[1].d = var_2e0.d
    *(result + 0xc) = var_2e0:4.d
    result[2] = var_2d8
    result[3].d = var_2d0.d
    *(result + 0x1c) = var_2d0:4.d
    result[4] = var_2c8
    result[5].d = var_2c0.d
    *(result + 0x2c) = var_2c0:4.d
    result[6].d = var_2b8_1
    result[7] = var_2b0
    result[8].d = var_2a8.d
    *(result + 0x44) = var_2a8:4.d
    int64_t var_2a8_1 = 0
    __builtin_memset(&var_2e8, 0, 0x30)
    var_2b0 = 0
else
    *result = var_2e8
    result[1].d = var_2e0.d
    *(result + 0xc) = var_2e0:4.d
    result[2] = var_2d8
    result[3].d = var_2d0.d
    *(result + 0x1c) = var_2d0:4.d
    result[4] = 0
    result[5] = 0
    result[6].d = 0x33
    result[7] = 0
    result[8] = 0
    __builtin_memset(&var_2e8, 0, 0x20)

sub_14094ab00(&var_2b0)
int64_t rcx_44 = var_2c8

if (rcx_44 != 0)
    sub_140a74f90(rcx_44)

int64_t rcx_45 = var_2d8

if (rcx_45 != 0)
    sub_140a74f90(rcx_45)

int64_t rcx_46 = var_2e8

if (rcx_46 != 0)
    sub_140a74f90(rcx_46)

__security_check_cookie(rax_1 ^ &var_318)
return result
