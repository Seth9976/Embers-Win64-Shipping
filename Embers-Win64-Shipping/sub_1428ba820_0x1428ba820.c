// 函数: sub_1428ba820
// 地址: 0x1428ba820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
char* rax = arg1
uint32_t i
uint32_t r8_1

do
    r8_1 = zx.d(*rax)
    i = zx.d(*(rax + arg2 - arg1))
    
    if (r8_1 != i)
        break
    
    rax = &rax[1]
while (i != 0)

if (r8_1 - i != 0)
    if (strcmp(arg2, "ANY PRIVATE KEY") != 0)
        if (strcmp(arg2, "PARAMETERS") == 0)
            int64_t rax_9 = -1
            
            do
                rax_9 += 1
            while (arg1[rax_9] != 0)
            
            if (rax_9.d s> 0xb)
                void* rbx_6 = &arg1[sx.q(rax_9.d)]
                
                if (strcmp(rbx_6 - 0xa, "PARAMETERS") == 0 && *(rbx_6 - 0xb) == 0x20)
                    int32_t rbx_8 = (rbx_6 - 0xb).d - arg1.d
                    
                    if (rbx_8 s> 0)
                        void* arg_18
                        void* rax_11 = sub_1428bc250(&arg_18, arg1, rbx_8)
                        
                        if (rax_11 != 0)
                            int32_t rbx_9
                            rbx_9.b = *(rax_11 + 0x70) != 0
                            sub_1428af710(arg_18)
                            return zx.q(rbx_9)
            
            return 0
        
        int32_t rax_12 = strcmp(arg1, "X9.42 DH PARAMETERS")
        int32_t rax_13
        
        if (rax_12 == 0)
            rax_13 = strcmp(arg2, "DH PARAMETERS")
        
        if (rax_12 != 0 || rax_13 != 0)
            int32_t rax_14 = strcmp(arg1, "X509 CERTIFICATE")
            int32_t rax_15
            
            if (rax_14 == 0)
                rax_15 = strcmp(arg2, "CERTIFICATE")
            
            if (rax_14 != 0 || rax_15 != 0)
                int32_t rax_16 = strcmp(arg1, "NEW CERTIFICATE REQUEST")
                int32_t rax_17
                
                if (rax_16 == 0)
                    rax_17 = strcmp(arg2, "CERTIFICATE REQUEST")
                
                if (rax_16 != 0 || rax_17 != 0)
                    int32_t rax_18 = strcmp(arg1, "CERTIFICATE")
                    int32_t rax_19
                    
                    if (rax_18 == 0)
                        rax_19 = strcmp(arg2, "TRUSTED CERTIFICATE")
                    
                    if (rax_18 != 0 || rax_19 != 0)
                        int32_t rax_20 = strcmp(arg1, "X509 CERTIFICATE")
                        int32_t rax_21
                        
                        if (rax_20 == 0)
                            rax_21 = strcmp(arg2, "TRUSTED CERTIFICATE")
                        
                        if (rax_20 != 0 || rax_21 != 0)
                            int64_t rbx_10 = 0
                            
                            if (strcmp(arg1, "CERTIFICATE") == 0)
                                int64_t rcx_19 = 0
                                
                                while (true)
                                    char rax_23 = arg2[rcx_19]
                                    rcx_19 += 1
                                    
                                    if (rax_23 != data_143508968[0x13][rcx_19])
                                        break
                                    
                                    if (rcx_19 == 6)
                                        return 1
                            
                            if (strcmp(arg1, "PKCS #7 SIGNED DATA") == 0)
                                int64_t rcx_21 = 0
                                
                                while (true)
                                    char rax_25 = arg2[rcx_21]
                                    rcx_21 += 1
                                    
                                    if (rax_25 != data_143508968[0x13][rcx_21])
                                        break
                                    
                                    if (rcx_21 == 6)
                                        return 1
                            
                            if (strcmp(arg1, "CERTIFICATE") == 0)
                                int64_t rcx_23 = 0
                                
                                while (true)
                                    char rax_27 = arg2[rcx_23]
                                    rcx_23 += 1
                                    
                                    if (rax_27 != data_143508988[0x13][rcx_23])
                                        break
                                    
                                    if (rcx_23 == 4)
                                        return 1
                            
                            int64_t rcx_24 = 0
                            
                            while (true)
                                char rax_28 = arg1[rcx_24]
                                rcx_24 += 1
                                
                                if (rax_28 != data_143508968[0x13][rcx_24])
                                    break
                                
                                if (rcx_24 == 6)
                                    while (true)
                                        char rax_29 = arg2[rbx_10]
                                        rbx_10 += 1
                                        
                                        if (rax_29 != data_143508988[0x13][rbx_10])
                                            return 0
                                        
                                        if (rbx_10 == 4)
                                            return 1
                            
                            return 0
    else if (strcmp(arg1, "ENCRYPTED PRIVATE KEY") != 0 && strcmp(arg1, "PRIVATE KEY") != 0)
        int64_t rax_4 = -1
        
        do
            rax_4 += 1
        while (arg1[rax_4] != 0)
        
        if (rax_4.d s<= 0xc)
            return 0
        
        void* rbx_2 = &arg1[sx.q(rax_4.d)]
        
        if (strcmp(rbx_2 - 0xb, "PRIVATE KEY") != 0 || *(rbx_2 - 0xc) != 0x20)
            return 0
        
        int32_t rbx_4 = (rbx_2 - 0xc).d - arg1.d
        
        if (rbx_4 s<= 0)
            return 0
        
        void* rax_6 = sub_1428bc250(nullptr, arg1, rbx_4)
        
        if (rax_6 == 0 || *(rax_6 + 0xb8) == 0)
            return 0

return 1
