// 函数: sub_140d30c00
// 地址: 0x140d30c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_38)
int32_t arg_20 = 0x200000
int32_t arg_18 = 0
int32_t arg_10 = 0
char arg_8 = 0
int64_t var_48 = 0
int64_t var_40 = 0
sub_140af2b60()

if (sub_140b2acc0(&data_143dbb3f0, u"-filehostip=", &var_48, 1) == 0)
    sub_140af3c10(data_143ddb400, /Script/Engine.GarbageCollectionSettings", 
        gc.MaxObjectsNotConsideredByGC", &arg_18, &data_143de5780)
    sub_140af3c10(data_143ddb400, /Script/Engine.GarbageCollectionSettings", 
        gc.SizeOfPermanentObjectPool", &arg_10, &data_143de5780)
else
    data_1439aa890 = 0

sub_140af3c10(data_143ddb400, /Script/Engine.GarbageCollectionSettings", gc.MaxObjectsInGame", 
    &arg_20, &data_143de5780)
sub_140af2fd0(data_143ddb400, /Script/Engine.GarbageCollectionSettings", gc.PreAllocateUObjectArray"
    , &arg_8, &data_143de5780)
int64_t rcx_5 = var_48

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rax_1 = sx.q(arg_10)
data_143e1d658 = rax_1.d
int64_t rax_2 = sub_140a82f70(rax_1, 0)
uint64_t r9_5 = zx.q(arg_8)
int32_t r8_1 = arg_18
int32_t rdx_1 = arg_20
data_143e1d660 = rax_2
data_143e1d668 = rax_2
data_143e1d670 = rax_2
sub_140d18ba0(&data_143e1d990, rdx_1, r8_1, r9_5)
sub_140bc8b00()
data_143e1d834 = 1
sub_140d31ed0()
return pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_38)
