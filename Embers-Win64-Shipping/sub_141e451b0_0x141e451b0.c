// 函数: sub_141e451b0
// 地址: 0x141e451b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(data_143a2d2a0)

if (result.d s>= 0)
    uint64_t rbx
    rbx.b = (result.d & 0xfffffffd) == 0
    char arg_10 = rbx.b
    int64_t r13
    r13.b = result.d == 3
    
    if (rbx.b != 0 || r13.b != 0)
        if (sub_141f8ca20() != 0)
            int64_t* rax_2 = sub_140963350(sub_141f88540())
            int64_t rdx_1 = *rax_2
            (*(rdx_1 + 0x20))(rax_2, rdx_1, 0)
        
        int64_t var_68 = 0
        int32_t i_2 = 0
        int32_t var_58_1 = 0xffffffff
        result = sub_140d3cc80(sub_14258cb80(), &var_68, 1, 0x10, 0)
        int32_t i = i_2
        int32_t i_1 = var_58_1 + 1
        int64_t r9_1 = var_68
        int32_t i_3 = i_1
        
        if (i_1 s< i)
            do
                result = sx.q(i_1)
                
                if (*(r9_1 + (result << 3)) != 0)
                    break
                
                result = zx.q(i_1 + 1)
                i_3 = result.d
                i_1 = result.d
            while (result.d s< i)
        
        while (i_1 s>= 0)
            if (i_1 s>= i)
                break
            
            void* rdx_3 = *(r9_1 + (sx.q(i_1) << 3))
            
            if (rdx_3 != 0)
                int64_t* r12_1 = *(rdx_3 + 0x58)
                
                if (r12_1 != 0)
                    void var_50
                    sub_142307010(&var_50, rdx_3, 0)
                    int32_t j = 0
                    
                    if (r12_1[1].d s> 0)
                        int32_t rdx_4 = data_143a2d2a4
                        int64_t* r15_1 = nullptr
                        
                        do
                            void* rsi_1 = *(r15_1 + *r12_1)
                            
                            if (rbx.b == 0)
                                if (r13.b != 0 && *(rsi_1 + 0x3b1) == 0)
                                    if (*(rsi_1 + 0x3b0) != 0)
                                        if (*(rsi_1 + 0x308) != 0)
                                            sub_141e46e60(rsi_1 + 0x300, rsi_1 + 0x3b4)
                                            *(rsi_1 + 0x308) = 0
                                        
                                        *(rsi_1 + 0x3b4) = 0
                                        *(rsi_1 + 0x3b0) = 0
                                        rdx_4 = data_143a2d2a4
                                    
                                    if (*(rsi_1 + 0x3b1) == 0 && data_143a2d2a0 == 3)
                                        void* r14_1 = *(var_68 + (sx.q(i_3) << 3))
                                        int128_t* r9_2 = *(r14_1 + 0x370)
                                        int128_t* rcx_9 = r9_2
                                        void* r8_4 = &r9_2[sx.q(*(r14_1 + 0x378))]
                                        
                                        if (r9_2 != r8_4)
                                            while (true)
                                                if (j s>= data_143a2d2a8)
                                                    int64_t rax_7 = (*rcx_9):8.q
                                                    
                                                    if (rax_7.b != 0)
                                                        bool cond:4_1
                                                        
                                                        if (rdx_4 s< 0)
                                                            cond:4_1 = j s>= (rax_7 u>> 0x20).d
                                                        else
                                                            cond:4_1 = j s>= rdx_4
                                                        
                                                        if (cond:4_1)
                                                            break
                                                
                                                rcx_9 = &rcx_9[1]
                                                
                                                if (rcx_9 == r8_4)
                                                    goto label_141e4549f
                                            
                                            int32_t rcx_11 = ((rcx_9 - r9_2) s>> 4).d
                                            
                                            if (rcx_11 != 0xffffffff && *(rsi_1 + 0x308) == 0)
                                                int64_t* rbx_3 = sx.q(rcx_11) << 4
                                                *(rsi_1 + 0x308) =
                                                    sub_141e42170(rsi_1 + 0x300, rbx_3 + r9_2)
                                                *(rsi_1 + 0x3b0) = 1
                                                *(rsi_1 + 0x3b4) = *(rbx_3 + *(r14_1 + 0x370))
                                                rdx_4 = data_143a2d2a4
                                                rbx = zx.q(arg_10)
                            else if (*(rsi_1 + 0x3b1) != 0 || *(rsi_1 + 0x3b0) == 0)
                                rbx = zx.q(arg_10)
                            else
                                if (*(rsi_1 + 0x308) != 0)
                                    sub_141e46e60(rsi_1 + 0x300, rsi_1 + 0x3b4)
                                    *(rsi_1 + 0x308) = 0
                                
                                *(rsi_1 + 0x3b4) = 0
                                *(rsi_1 + 0x3b0) = 0
                                rdx_4 = data_143a2d2a4
                                rbx = zx.q(arg_10)
                            
                        label_141e4549f:
                            j += 1
                            r15_1 = &r15_1[1]
                        while (j s< r12_1[1].d)
                    
                    sub_142307970(&var_50)
                    i_1 = i_3
                    i = i_2
                    r9_1 = var_68
            
            result = zx.q(i_1 + 1)
            i_3 = result.d
            i_1 = result.d
            
            if (result.d s< i)
                do
                    result = sx.q(i_1)
                    
                    if (*(r9_1 + (result << 3)) != 0)
                        break
                    
                    result = zx.q(i_1 + 1)
                    i_3 = result.d
                    i_1 = result.d
                while (result.d s< i)
        
        if (r9_1 != 0)
            return sub_140a74f90(r9_1)

return result
