// 函数: sub_142c5ab30
// 地址: 0x142c5ab30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t buffer2 = 0
char* buffer2_1 = nullptr
int32_t r14 = 0x5a

if (arg2 == 0)
    return 0

if (arg3 != 0 && arg4 != 0)
    int32_t rax_2 = strncmp(arg2, "sha256//", 8)
    
    if (rax_2 != 0)
        FILE* _Stream = fopen(arg2, "rb")
        
        if (_Stream != 0)
            if (fseek(_Stream, 0, 2) == 0)
                int64_t rdi_1 = sx.q(ftell(_Stream))
                
                if (fseek(_Stream, 0, 0) == 0 && rdi_1.d u<= 0x100000)
                    uint64_t _ElementSize = sub_14058e700(rdi_1)
                    
                    if (arg4 u<= _ElementSize)
                        char* _Buffer = data_143ccb898(_ElementSize + 1)
                        buffer2_1 = _Buffer
                        
                        if (_Buffer != 0 && fread(_Buffer, _ElementSize, 1, _Stream) == 1)
                            if (arg4 != _ElementSize)
                                buffer2_1[_ElementSize] = 0
                                int64_t var_38
                                
                                if (sub_142c5baf0(buffer2_1, &buffer2, &var_38) == 0
                                        && arg4 == var_38 && memcmp(arg3, buffer2, arg4) == 0)
                                    r14 = 0
                            else if (memcmp(arg3, buffer2_1, arg4) == 0)
                                r14 = 0
            
            data_143ccb8a0(buffer2_1)
            data_143ccb8a0(buffer2)
            buffer2 = 0
            fclose(_Stream)
    else
        void* rax_3 = data_143ccb898(zx.q(rax_2 + 0x20))
        char* rbx = rax_3
        
        if (rax_3 == 0)
            return 0x1b
        
        sub_142c72070(arg3, arg4, rax_3)
        uint64_t count_1
        int64_t buffer1_1
        int32_t rax_4
        int512_t zmm2
        rax_4, zmm2 = sub_142c75c90(arg1, rbx, 0x20, &buffer1_1, arg5, &count_1)
        data_143ccb8a0(rbx)
        
        if (rax_4 != 0)
            return zx.q(rax_4)
        
        sub_142c64850(arg1, "\t public key hash: sha256//%s\n", buffer1_1, zmm2)
        int64_t rbx_1 = -1
        bool cond:0_1
        
        do
            cond:0_1 = arg2[rbx_1 + 1] != 0
            rbx_1 += 1
        while (cond:0_1)
        char* str1_2 = data_143ccb898(rbx_1 + 1)
        
        if (str1_2 == 0)
            data_143ccb8a0(buffer1_1)
            return 0x1b
        
        memcpy(str1_2, arg2, rbx_1.d + 1)
        char* str1_1 = str1_2
        int64_t buffer1
        
        while (true)
            char* str1 = strstr(str1_1, ";sha256//")
            
            if (str1 != 0)
                *str1 = 0
            
            int64_t rax_5 = -1
            
            do
                rax_5 += 1
            while (str1_1[8 + rax_5] != 0)
            
            uint64_t count = count_1
            buffer1 = buffer1_1
            
            if (count == rax_5 && memcmp(buffer1, &str1_1[8], count) == 0)
                r14 = 0
                break
            
            if (str1 == 0)
                break
            
            *str1 = 0x3b
            char* str1_3 = strstr(str1, "sha256//")
            str1_1 = str1_3
            
            if (str1_3 == 0)
                buffer1 = buffer1_1
                break
        
        data_143ccb8a0(buffer1)
        buffer1_1 = 0
        data_143ccb8a0(str1_2)

return zx.q(r14)
