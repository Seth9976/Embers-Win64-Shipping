// 函数: sub_14243b1c0
// 地址: 0x14243b1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(arg1 + 0x38)
int32_t var_38
int32_t r9

if (r8 == 0)
    int32_t arg_24 = 0
    void arg_8
    int32_t rcx_1 = *sub_140b5e500(&arg_8, 0x11a)
    int32_t var_34_1 = 0
    int32_t arg_18
    var_38 = *sub_140b5e500(&arg_18, 0x11a)
    
    if (sub_1423d6c20(data_143f5b298, arg1, var_38.q, rcx_1.q) != 0)
        int32_t arg_1c = 0
        arg_18 = *sub_140b5e500(&arg_8, 0x11a)
        void* rax_5 = sub_1423dcd80(data_143f5b298, arg1, arg_18.q)
        *(arg1 + 0x38) = rax_5
        sub_14217ba70(rax_5, arg1)
        char* i = *(arg1 + 0x158)
        
        for (void* rdx_4 = sx.q(*(arg1 + 0x160)) * 0x78 + i; i != rdx_4; i = &i[0x78])
            if (*i == 0)
                *(i + 0x10) = *(arg1 + 0x38)
                break
        
        char* i_1 = *(arg1 + 0x158)
        
        for (void* rdx_6 = sx.q(*(arg1 + 0x160)) * 0x78 + i_1; i_1 != rdx_6; i_1 = &i_1[0x78])
            if (*i_1 == 2)
                *(i_1 + 0x10) = *(arg1 + 0x38)
                break
    
    int64_t* rcx_9 = *(arg1 + 0x38)
    
    if (rcx_9 != 0)
        int64_t var_28 = 0
        int64_t var_20 = 0
        void* rbx
        
        if ((*(*rcx_9 + 0x280))(rcx_9, arg1 + 0x28, arg2, 0, &var_28) != 0)
            TEB* gsbase
            
            if (data_143f5ecbc s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143f5ecbc)
                
                if (data_143f5ecbc == 0xffffffff)
                    sub_140af2b60()
                    data_143f5ecb9 = sub_140b21a10(&data_143dbb3f0, u"lanplay")
                    _Init_thread_footer(&data_143f5ecbc)
            
            if (data_143f5ecb9 == 0 && sub_1424130d0(arg2, &data_1432ddb18) == 0)
                void* rcx_18 = *(arg1 + 0x38)
                int32_t rax_17 = *(rcx_18 + 0x60)
                
                if (rax_17 s< *(rcx_18 + 0x64) && rax_17 s> 0x9c4)
                    *(rcx_18 + 0x64) = rax_17
            
            *(arg1 + 0x55c) = *(*(arg1 + 0x38) + 0x68)
            rbx.b = 1
        else
            sub_1423d2710(data_143f5b298, arg1, *(arg1 + 0x38), 2, &var_28)
            sub_1423d84f0(data_143f5b298, arg1, *(*(arg1 + 0x38) + 0x190))
            *(arg1 + 0x38) = 0
            char* i_2 = *(arg1 + 0x158)
            
            for (void* rdx_12 = sx.q(*(arg1 + 0x160)) * 0x78 + i_2; i_2 != rdx_12; i_2 = &i_2[0x78])
                if (*i_2 == 0)
                    *(i_2 + 0x10) = 0
                    break
            
            char* rcx_14 = *(arg1 + 0x158)
            void* rdx_14 = sx.q(*(arg1 + 0x160)) * 0x78 + rcx_14
            
            if (rcx_14 == rdx_14)
            label_14243b3f6:
                rbx.b = 0
            else
                do
                    if (*rcx_14 == 2)
                        *(rcx_14 + 0x10) = 0
                        goto label_14243b3f6
                    
                    rcx_14 = &rcx_14[0x78]
                while (rcx_14 != rdx_14)
                
                rbx.b = 0
        
        int64_t rcx_20 = var_28
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        return zx.q(rbx.b)
    
    r9 = (rcx_9 + 1).d
    r8 = 0
else
    r9 = 0

var_38.q = 0
int64_t var_30 = 0
sub_1423d2710(data_143f5b298, arg1, r8, r9, &var_38)
int64_t rcx_11 = var_38.q

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t result
result.b = 0
return result
