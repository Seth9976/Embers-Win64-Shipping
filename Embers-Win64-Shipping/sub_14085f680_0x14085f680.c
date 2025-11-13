// 函数: sub_14085f680
// 地址: 0x14085f680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("Niagara")
char arg_8
sub_140744650(&arg_8, arg1)

if ((*(arg1 + 0xd68) & 1) != 0)
    int64_t* rcx_1 = *(arg2 + 0x10)
    int64_t rax_1 = sx.q(rcx_1[1].d)
    
    if (rax_1.d != 0)
        int64_t* rbx_1 = *rcx_1
        int32_t i_2 = 0
        int64_t rsi_1 = 0
        uint64_t r14_2 = rax_1 << 3 u>> 3
        
        if (rbx_1 u> &rbx_1[rax_1])
            r14_2 = 0
        
        if (r14_2 != 0)
            do
                sub_14085e170(*rbx_1)
                rsi_1 += 1
                rbx_1 = &rbx_1[1]
            while (rsi_1 != r14_2)
            
            rcx_1 = *(arg2 + 0x10)
        
        int32_t rsi_2 = rcx_1[1].d
        
        if (rsi_2 != 0)
            sub_1407e7150(arg1 + 0x2b0, 1)
            sub_1407e7150(arg1 + 0x380, 1)
            sub_1407e68d0(arg1 + 0x2b0, rsi_2, 0)
            sub_1407e68d0(arg1 + 0x380, rsi_2, 0)
            int32_t i = 0
            
            if (*(*(arg2 + 8) + 0x70) s> 0)
                int64_t r8_1 = 0
                
                do
                    int64_t* rdx_6 = *(arg1 + 0xd58) + r8_1
                    void* r9_1 = *rdx_6
                    rdx_6[7] = 0
                    rdx_6[8] = 0
                    
                    if (r9_1 != 0)
                        void* r10_1 = rdx_6[1]
                        
                        if (r10_1 != 0)
                            void* rbx_2 = *(r9_1 + 0x98)
                            
                            if (rbx_2 != 0)
                                rdx_6[7] = zx.q(*(rbx_2 + 0xbc) * *(r10_1 + 4)) + *(rbx_2 + 0x28)
                                void* r9_2 = *(r9_1 + 0xa0)
                                
                                if (r9_2 != 0)
                                    rdx_6[8] = zx.q(*(r9_2 + 0xbc) * *(r10_1 + 4)) + *(r9_2 + 0x28)
                    
                    i += 1
                    r8_1 += 0x48
                while (i s< *(*(arg2 + 8) + 0x70))
            
            void* rax_5 = *(arg2 + 0x10)
            int64_t (* var_48)(int64_t* arg1, int32_t* arg2) = sub_14084adf0
            void* var_58 = arg2
            void** var_40_1 = &var_58
            void* var_50_1 = arg1
            sub_14077b750(*(rax_5 + 8), &var_48, 1)
            *(*(arg1 + 0x350) + 0xb0) = rsi_2
            *(*(arg1 + 0x420) + 0xb0) = rsi_2
            sub_1407ecfd0(arg1 + 0x2b0, 1)
            sub_1407ecfd0(arg1 + 0x380, 1)
        
        if (*(arg2 + 0x24) s> 0)
            Mod1::fAddSymRefs(arg1, arg2)
        
        sub_1408619d0(arg1, arg2)
        sub_140860850(arg1, arg2)
        int64_t* rax_8 = *(arg2 + 0x10)
        int64_t r14_3 = 0
        int64_t* r15_1 = *rax_8
        uint64_t rcx_20 = sx.q(rax_8[1].d) << 3 u>> 3
        
        if (r15_1 u> &r15_1[rax_8[1]])
            rcx_20 = 0
        
        if (rcx_20 != 0)
            do
                int64_t rsi_3 = sx.q(*(arg1 + 0xe58))
                int64_t r13_1 = *r15_1
                int32_t rax_11 = (rsi_3 + 1).d
                *(arg1 + 0xe58) = rax_11
                
                if (rax_11 s> *(arg1 + 0xe5c))
                    sub_14083a490(arg1 + 0xe30, rsi_3.d)
                
                void* rax_12 = *(arg1 + 0xe50)
                void* rcx_22 = arg1 + 0xe30
                
                if (rax_12 != 0)
                    rcx_22 = rax_12
                
                *(rcx_22 + (rsi_3 << 3)) = r13_1
                
                if (*(arg1 + 0xe58) == data_14396feec)
                    sub_140850920(arg1, arg2)
                
                r15_1 = &r15_1[1]
                r14_3 += 1
            while (r14_3 != rcx_20)
            
            i_2 = 0
        
        sub_140850920(arg1, arg2)
        
        if (*(arg2 + 0x40) == 0 && *(arg2 + 0x41) == 0)
            int64_t* rcx_25 = *(arg2 + 0x10)
            
            if (rcx_25[1].d s> 0)
                int64_t rsi_4 = 0
                int32_t i_1
                
                do
                    void* rbx_4 = *(*rcx_25 + (rsi_4 << 3))
                    sub_14084fd50(rbx_4)
                    i_1 = i_2 + 1
                    rcx_25 = *(arg2 + 0x10)
                    bool cond:1_1 = *(rbx_4 + 0x6e8) - 3 u<= 1
                    int64_t rax_17 = rsi_4 + 1
                    
                    if (cond:1_1 != 0)
                        i_1 = i_2
                    
                    if (cond:1_1 != 0)
                        rax_17 = rsi_4
                    
                    i_2 = i_1
                    rsi_4 = rax_17
                while (i_1 s< rcx_25[1].d)

sub_140746840(&arg_8)
return sub_140b37f60("Niagara")
