// 函数: sub_140af9950
// 地址: 0x140af9950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de5c60 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de5c60)
    
    if (data_143de5c60 == 0xffffffff)
        int32_t rax_5 = 0
        int64_t r14_1 = 0
        int64_t var_38 = 0
        int32_t rsi_1 = 0
        int64_t rbx_1 = -1
        int32_t var_30_3 = 0
        int32_t var_2c_1 = 0
        
        if ((*u"Embers")[0] != 0)
            int64_t rdi_1 = -1
            
            do
                rdi_1 += 1
            while ((*u"Embers")[rdi_1] != 0)
            
            if (rdi_1.d + 1 s> 0)
                sub_1405947f0(&var_38, rdi_1.d + 1)
                rax_5 = var_2c_1
                rsi_1 = var_30_3
                r14_1 = var_38
            
            rsi_1 += rdi_1.d + 1
            
            if (rsi_1 s> rax_5)
                sub_140594770(&var_38)
                r14_1 = var_38
            
            UnDecorator::getReferenceType(r14_1, u"Embers", (rdi_1.d + 1) * 2)
        
        data_143de5ba8 = 0
        data_143de5ba0 = u"%GAME%"
        data_143de5bb0 = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(&data_143de5ba8, rsi_1, 0)
            memcpy(data_143de5ba8, r14_1, rsi_1 * 2)
        else
            data_143de5bb4 = 0
        
        data_143de5bb8 = 6
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)
        
        int64_t* rax_7 = sub_140b251a0(&var_38)
        data_143de5bc0 = u"%GAMEDIR%"
        sub_140596d10(&data_143de5bc8, rax_7)
        int64_t rcx_12 = var_38
        data_143de5bd8 = 9
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        int64_t* rax_8 = sub_140b13b30(&var_38)
        data_143de5be0 = u"%ENGINEDIR%"
        sub_140596d10(&data_143de5be8, rax_8)
        int64_t rcx_14 = var_38
        data_143de5bf8 = 0xb
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        int64_t* rax_9 = sub_140b141a0(&var_38)
        data_143de5c00 = u"%ENGINEUSERDIR%"
        sub_140596d10(&data_143de5c08, rax_9)
        int64_t rcx_16 = var_38
        data_143de5c18 = 0xf
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        int64_t* rax_10 = sub_140b14400(&var_38)
        data_143de5c20 = u"%ENGINEVERSIONAGNOSTICUSERDIR%"
        sub_140596d10(&data_143de5c28, rax_10)
        int64_t rcx_18 = var_38
        data_143de5c38 = 0x1e
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        int16_t* rax_11 = sub_140b64e00()
        var_38 = 0
        int32_t rdx_6 = 0
        int32_t var_30_2 = 0
        int32_t rcx_5 = 0
        int32_t var_2c_2 = 0
        
        if (rax_11 != 0 && *rax_11 != 0)
            do
                rbx_1 += 1
            while (rax_11[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_38, rbx_1.d + 1)
                rcx_5 = var_2c_2
                rdx_6 = var_30_2
            
            int32_t rax_6 = rbx_1.d + 1 + rdx_6
            var_30_2 = rax_6
            
            if (rax_6 s> rcx_5)
                sub_140594770(&var_38)
            
            UnDecorator::getReferenceType(var_38, rax_11, (rbx_1.d + 1) * 2)
        
        sub_140b21570(&var_38)
        int64_t rbx_3 = var_38
        data_143de5c40 = u"%APPSETTINGSDIR%"
        data_143de5c48 = 0
        data_143de5c50 = var_30_2
        
        if (var_30_2 != 0)
            sub_1405a4c70(&data_143de5c48, var_30_2, 0)
            memcpy(data_143de5c48, rbx_3, var_30_2 * 2)
            rbx_3 = var_38
        else
            data_143de5c54 = 0
        
        data_143de5c58 = 0x10
        
        if (rbx_3 != 0)
            sub_140a74f90(rbx_3)
        
        atexit(sub_142cbedd0)
        _Init_thread_footer(&data_143de5c60)

for (int64_t* i = &data_143de5ba0; i != &data_143de5c60; i = &i[4])
    if (wcsncmp(*i, arg1, sx.q(i[3].d)) == 0)
        return i

return 0
