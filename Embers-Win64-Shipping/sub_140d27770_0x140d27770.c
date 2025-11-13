// 函数: sub_140d27770
// 地址: 0x140d27770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_50
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_50)

if (arg2 != 0)
    void var_80
    pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_80)
    sub_140d21330()
    int64_t* rbx_1 = data_143e1d910
    int64_t rdi_1 = 0
    uint64_t rsi_2 = sx.q(data_143e1d918) << 3 u>> 3
    
    if (rbx_1 u> &rbx_1[sx.q(data_143e1d918)])
        rsi_2 = 0
    
    if (rsi_2 != 0)
        do
            int64_t* rcx_4 = *rbx_1
            (**rcx_4)(rcx_4)
            rdi_1 += 1
            rbx_1 = &rbx_1[1]
        while (rdi_1 != rsi_2)
    
    data_143e1d918 = 0
    
    if (data_143e1d91c != 0)
        sub_1405c5570(&data_143e1d910, 0)
    
    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_80)
    sub_140d21410()
    sub_140d21480()
    sub_140d213a0()
    int64_t r12
    r12.b = 0
    TEB* gsbase
    void* rdi_2 = gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)
    void* var_88_1 = rdi_2
    
    while (data_143e1d898 != 0 || data_143e1d900 != 0 || data_143e1d8d0 != 0 || data_143e1d8e8 != 0)
        r12.b = 1
        sub_140d31ed0()
        void var_68
        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_68)
        int32_t* rbx_2 = 0x14 + *rdi_2
        
        if (data_143e1d8f0 s> *rbx_2)
            _Init_thread_header(&data_143e1d8f0)
            
            if (data_143e1d8f0 == 0xffffffff)
                data_143e1d8e0 = 0
                data_143e1d8e8.q = 0
                atexit(sub_142cc3130)
                _Init_thread_footer(&data_143e1d8f0)
        
        bool cond:0_1 = data_143e1d8d8 s> *rbx_2
        void* r15_1 = data_143e1d8e0
        int64_t rdi_3 = sx.q(data_143e1d8e8)
        data_143e1d8e0 = 0
        data_143e1d8e8.q = 0
        
        if (cond:0_1)
            _Init_thread_header(&data_143e1d8d8)
            
            if (data_143e1d8d8 == 0xffffffff)
                data_143e1d8c8 = 0
                data_143e1d8d0.q = 0
                atexit(sub_142cc3170)
                _Init_thread_footer(&data_143e1d8d8)
        
        void* rbp_1 = data_143e1d8c8
        int64_t r14_1 = sx.q(data_143e1d8d0)
        data_143e1d8c8 = 0
        data_143e1d8d0.q = 0
        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_80)
        void* rbx_3 = r15_1
        void* rsi_5 = (rdi_3 << 4) + r15_1
        
        if (r15_1 != rsi_5)
            do
                sub_140d1dfb0(nullptr, *(rbx_3 + 8))
                rbx_3 += 0x10
            while (rbx_3 != rsi_5)
        
        void* rbx_4 = rbp_1
        void* rdi_6 = (r14_1 << 4) + rbp_1
        
        if (rbp_1 != rdi_6)
            do
                sub_140d1dfb0(nullptr, *(rbx_4 + 8))
                rbx_4 += 0x10
            while (rbx_4 != rdi_6)
        
        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_80)
        void* rbx_5 = r15_1
        
        if (r15_1 != rsi_5)
            do
                (*rbx_5)()
                rbx_5 += 0x10
            while (rbx_5 != rsi_5)
        
        void* rbx_6 = rbp_1
        
        if (rbp_1 != rdi_6)
            do
                (*rbx_6)()
                rbx_6 += 0x10
            while (rbx_6 != rdi_6)
        
        if (rbp_1 != 0)
            sub_140a74f90(rbp_1)
        
        if (r15_1 != 0)
            sub_140a74f90(r15_1)
        
        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_68)
        sub_140d31650()
        rdi_2 = var_88_1
    
    if (r12.b != 0 && data_14399fa4c == 0)
        sub_140bd8a10()

return pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_50)
