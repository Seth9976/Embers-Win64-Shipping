// 函数: sub_141807a90
// 地址: 0x141807a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
RefPtr<class RefCount<class pdb_internal::Buffer> >::RefPtr<class RefCount<class pdb_internal::Buffer> >(
    &var_68)
int32_t var_60 = 0
int32_t var_5c = 0
void var_78
RefPtr<class RefCount<class pdb_internal::Buffer> >::RefPtr<class RefCount<class pdb_internal::Buffer> >(
    &var_78)
int32_t var_70 = 0
int32_t var_6c = 0
void var_88
RefPtr<class RefCount<class pdb_internal::Buffer> >::RefPtr<class RefCount<class pdb_internal::Buffer> >(
    &var_88)
int32_t var_80 = 0
int32_t var_7c = 0

while (sub_141804480(&arg1[2]) == 0)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    double zmm0_1 = sub_141803c10()
    double var_28_1 = float.d(performanceCount) * zmm0_1 + 16777216.0
    int64_t var_a8_1 = (zx.o(0)).q
    char var_d8_1 = 1
    
    while (zx.d(var_d8_1) != 0)
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        double zmm0_2 = sub_141803c10()
        zmm0_2 = float.d(performanceCount_1) * zmm0_2 + 16777216.0
        sub_141806230(arg1, &var_68, &var_78, &var_88)
        
        if (arg1[0xd].d == 0)
            var_d8_1 = 0
        
        int64_t performanceCount_2
        QueryPerformanceCounter(&performanceCount_2)
        zmm0_1 = sub_141803c10()
        zmm0_1 = float.d(performanceCount_2) * zmm0_1 + 16777216.0
        
        if (zx.d(var_d8_1) == 0)
            var_a8_1 = zmm0_1
        else
            double var_c0_1 = arg1[4]
            double var_c8_1 = arg1[3] f- (zmm0_1 - zmm0_2)
            double var_b8_1
            
            var_b8_1 = var_c8_1 < var_c0_1 ? var_c0_1 : var_c8_1
            
            zmm0_1.d = fconvert.s(fconvert.t(var_b8_1))
            sub_140b732d0(zmm0_1.d)
    
    double var_98_1 = arg1[6]
    double var_a0_1 = arg1[5] f- (var_a8_1 - var_28_1)
    double var_90_1
    
    var_90_1 = var_a0_1 < var_98_1 ? var_98_1 : var_a0_1
    
    zmm0_1.d = fconvert.s(fconvert.t(var_90_1))
    sub_140b732d0(zmm0_1.d)

int32_t var_d0 = 0
pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_88)
pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_78)
pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_68)
return 0
