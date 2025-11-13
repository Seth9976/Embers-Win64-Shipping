// 函数: sub_142c5c970
// 地址: 0x142c5c970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    void* rdi_1 = *arg1
    
    if (rdi_1 != 0)
        if (*(arg1 + 0x3f1) == 0)
            arg1[0x9a]
        
        if (*(arg1 + 0x3f1) != 0 || arg1[0x9e] == neg.q(arg1[0x9a]))
            int64_t* rdx = arg1[0xd]
            
            if (rdx != 0)
                sub_142c5a710(rdi_1, rdx)
                arg1[0xd] = 0
            
            sub_142c5a130(rdi_1)
            sub_142c87e10(arg1)
            int64_t r8_1 = *(arg1[0x87] + 0x60)
            
            if (r8_1 != 0)
                r8_1(arg1, zx.q(arg2))
            
            sub_142c64850(rdi_1, "Closing connection %ld\n", zx.q(*(arg1 + 0x64)), arg3)
            sub_142c6ee50(*(rdi_1 + 0xa48), arg1)
            data_143ccb8a0(arg1[0x19])
            arg1[0x19] = 0
            data_143ccb8a0(arg1[0x1e])
            arg1[0x1e] = 0
            data_143ccb8a0(arg1[0x29])
            arg1[0x29] = 0
            data_143ccb8a0(arg1[0x22])
            arg1[0x22] = 0
            j_sub_142c71b70(arg1, 0)
            
            if (sub_142c53090(*(rdi_1 + 0xc0), 3) != 0)
                if (arg1 != -0x4b8)
                    int64_t* i_2 = arg1[0x97]
                    
                    if (i_2 != 0)
                        int64_t* i
                        
                        do
                            void* rcx_12 = *i_2
                            i = i_2[2]
                            *(rcx_12 + 0x4e29) = 1
                            objf::EnumImportImpl::reset(rcx_12)
                            sub_142c6a090(&arg1[0x97], i_2, 0)
                            i_2 = i
                        while (i != 0)
                
                if (arg1 != -0x4d8)
                    int64_t* i_3 = arg1[0x9b]
                    
                    if (i_3 != 0)
                        int64_t* i_1
                        
                        do
                            void* rcx_14 = *i_3
                            i_1 = i_3[2]
                            *(rcx_14 + 0x4e29) = 1
                            objf::EnumImportImpl::reset(rcx_14)
                            sub_142c6a090(&arg1[0x9b], i_3, 0)
                            i_3 = i_1
                        while (i_1 != 0)
            
            sub_142c5fa30(arg1)

return 0
